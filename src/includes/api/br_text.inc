;-------------------------------------------------------------------
; Name: br_text_print
;-------------------------------------------------------------------
; Description: Prints a null terminated string to the console, 
;              followed by a newline
; Note: 
; URL:
;-------------------------------------------------------------------
; Inputs: string, location of string in memory
; Returns: None
; Destroys: lda, ldy
;-------------------------------------------------------------------

        .macro  br_text_print str
            pha

            ldx #0                 ; initialize string iteration index
            lda API_FN_WRITE_CHAR  ; console write function        (API::console->write)
            sta API_FUNCTION       ; set API 'Function'            (API::console->write)
        @printchr:
            lda API_COMMAND        ; previous API routine status
            bne @printchr            ; wait for previous API routine to complete

            lda str , x             ; next character of 'hello_msg' (API::console->write->char)
            beq end                ; test for string end null byte
            sta API_PARAMETERS + 0 ; set API 'Parameter0'          (API::console->write->char)
            lda #API_GROUP_CONSOLE  ; 'Console' API function group  (API::console)
            sta API_COMMAND        ; trigger 'Console' API routine (API::console)

            inx                    ; increment iteration index
            jmp @printchr            ; continue 'hello_msg' print loop

            pla
        .endmacro

        .macro br_text_set_color color
            lda #color        ; Load the color code
            jsr CHRPRN      ; Call the character print routine to set the color
        .endmacro