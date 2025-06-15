;-------------------------------------------------------------------
; Name: br_screen_clear
;-------------------------------------------------------------------
; Description: Clears the screen 
;
; Note: 
; URL:
;-------------------------------------------------------------------
; Inputs: None
; Returns: None
; Destroys: lda
;-------------------------------------------------------------------
;        .macro br_screen_clear
;            lda #$c
;            sta $FF01
;            lda #$2
;            sta $FF00
;        .endmacro

;API_FN_CLEAR_SCREEN   = $0C ; API function

br_screen_clear:
        lda #API_FN_CLEAR_SCREEN
        sta API_FUNCTION
    @wait_api:
        lda API_COMMAND             ; previous API routine status
        bne @wait_api               ; wait for previous API routine to complete 
        lda #API_GROUP_CONSOLE
        sta API_COMMAND
        rts