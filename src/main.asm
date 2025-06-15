.include "includes/system/neo6502.asm"

.org $800
.segment "STARTUP"

   jmp start

; API includes
   .include "includes/api/br_text.inc"
   .include "includes/api/br_screen.inc"
   .include "includes/api/br_graphics.inc"

; App includes
   .include "includes/app/menu.inc"
   .include "includes/app/full_screen.inc"
   .include "includes/app/small_screen.inc"

;---------------------------------------------------------------
; Menu equates
;---------------------------------------------------------------
;
start:

    jsr br_screen_clear

app_loop:

    jsr br_wait_for_vsync

    jsr menu_draw

    lda #API_FN_READ_CHAR
    sta API_FUNCTION
@wait_api:
    lda API_COMMAND
    bne @wait_api
    lda #API_GROUP_CONSOLE
    sta API_COMMAND

    lda API_PARAMETERS + 0

menu_full_screen:
   cmp #MENU_FULL_SCREEN
   bne menu_small_screen
   jsr show_full_screen
   bra done
menu_small_screen:
   cmp #MENU_SMALL_SCREEN
   bne menu_clear_screen
   jsr show_small_screen
   bra done
menu_clear_screen:
   cmp #MENU_CLEAR_SCREEN
   bne menu_quit
   jsr clear_screen
   bra done
menu_quit:
   cmp #MENU_QUIT
   beq quit
done:
   jmp app_loop

quit:
    jsr br_screen_clear
@wait_api:
    lda API_COMMAND
    bne @wait_api
    lda #API_FN_RESET
    sta API_FUNCTION
    lda #API_GROUP_SYSTEM
    sta API_COMMAND
    rts

show_full_screen:
    jsr br_screen_clear
    full_screen
    rts

show_small_screen:
    jsr br_screen_clear
    small_screen
    rts

clear_screen:
    jsr br_screen_clear
    rts

