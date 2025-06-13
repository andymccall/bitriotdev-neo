;---------------------------------------------------------------
; Menu equates
;---------------------------------------------------------------
;
MENU_CLEAR_SCREEN         = $43
MENU_FULL_SCREEN          = $46
MENU_QUIT                 = $51
MENU_SMALL_SCREEN         = $53
CURSOR_POS_X              = $0
CURSOR_POS_Y              = $1D

;---------------------------------------------------------------
menu_draw:

        pha

        lda #API_FN_SET_CURSOR_POS 
        sta API_FUNCTION
    @set_cursor_pos:
        lda API_COMMAND             ; previous API routine status
        bne @set_cursor_pos               ; wait for previous API routine to complete 
        lda #CURSOR_POS_X
        sta API_PARAMETERS + 0
        lda #CURSOR_POS_Y
        sta API_PARAMETERS + 1
        lda #API_GROUP_CONSOLE
        sta API_COMMAND

        lda API_FN_SET_TEXT_COLOR 
        sta API_FUNCTION
    @setcolor:
        lda API_COMMAND             ; previous API routine status
        bne @setcolor               ; wait for previous API routine to complete 
        lda #COLOR_YELLOW
        sta API_PARAMETERS + 0
        lda #API_GROUP_CONSOLE
        sta API_COMMAND

        ldx #0                 ; initialize string iteration index
        lda API_FN_WRITE_CHAR  ; console write function        (API::console->write)
        sta API_FUNCTION       ; set API 'Function'            (API::console->write)
    @printchr:
        lda API_COMMAND        ; previous API routine status
        bne @printchr            ; wait for previous API routine to complete

        lda menu_string , x             ; next character of 'hello_msg' (API::console->write->char)
        beq end                ; test for string end null byte
        sta API_PARAMETERS + 0 ; set API 'Parameter0'          (API::console->write->char)
        lda #API_GROUP_CONSOLE  ; 'Console' API function group  (API::console)
        sta API_COMMAND        ; trigger 'Console' API routine (API::console)

        inx                    ; increment iteration index
        jmp @printchr            ; continue 'hello_msg' print loop

        pla

        rts

menu_string:    .asciiz "[F] Full screen [S] Small screen [C] Clear [Q] Quit  "