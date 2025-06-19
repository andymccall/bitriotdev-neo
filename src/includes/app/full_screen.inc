        .macro full_screen

            ;---------------------- Large Blocks ----------------------


            ; Set the colour to white
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_WHITE & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            lda #00               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #0               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #40               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #00               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #165               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #$00               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ; Set the colour to yellow
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_YELLOW & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            lda #41               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #0               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #80               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #00               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #165               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #$00               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ; Set the colour to cyan
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_CYAN & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            lda #81               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #0               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #120               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #00               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #165               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #$00               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ; Set the colour to green
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_GREEN & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            lda #121               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #0               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #160               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #00               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #165               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #$00               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ; Set the colour to magenta
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_MAGENTA & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            lda #161               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #0               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #200               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #00               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #165               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #$00               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ; Set the colour to red
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_RED & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            lda #201               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #0               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #240               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #00               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #165               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #$00               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ; Set the colour to blue
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_BLUE & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            lda #241               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #0               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<280               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>280               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<185               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>185               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ;---------------- Large Horizontal Black Bar --------------

            ; Set the colour to black
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_BLACK & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            lda #0               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #0               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #40               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #0               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<320               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>320               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #80               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #0               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

        blit_image:
            lda #API_FN_BLITTER_BLIT_IMG ; simple blit
            sta API_FUNCTION

            lda #2 ; blitter action = solid & masked
            sta API_PARAMETERS 

            lda #<rectangle_data  ; source rectangle data address
            sta API_PARAMETERS + 1
            lda #>rectangle_data
            sta API_PARAMETERS + 2

            lda #<target_x      ; target coordinates
            sta API_PARAMETERS + 3
            lda #>target_x      
            sta API_PARAMETERS + 4
            lda #<target_y
            sta API_PARAMETERS + 5
            lda #>target_y
            sta API_PARAMETERS + 6

            lda #0 ; destination format = write whole byte
            sta API_PARAMETERS + 7

            lda #API_GROUP_BLITTER     ; 12
            sta API_COMMAND  

            ;------------------- Middle Thin Blocks -------------------

            ; Set the colour to red
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_RED & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            lda #0               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #0               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #<166               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #>166               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<60               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>60               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<185               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #0>185               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ; Set the colour to white
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_WHITE & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            
; --- Corner 1: (X=60, Y=166) ---

            ; X1 = 60
            lda #60                 ; Low-byte of 60 is 60.
            sta API_PARAMETERS + 0
            lda #0                  ; High-byte of 60 is 0.
            sta API_PARAMETERS + 1
            
            ; Y1 = 166
            lda #166                ; Low-byte of 166 is 166.
            sta API_PARAMETERS + 2
            lda #0                  ; High-byte of 166 is 0.
            sta API_PARAMETERS + 3

; --- Corner 2: (X=119, Y=185) ---

            ; X2 = 120
            lda #120                ; Low-byte of 119 is 119.
            sta API_PARAMETERS + 4
            lda #0                  ; High-byte of 119 is 0.
            sta API_PARAMETERS + 5

            ; Y2 = 185
            lda #185                ; Low-byte of 185 is 185.
            sta API_PARAMETERS + 6
            lda #0                  ; High-byte of 185 is 0.
            sta API_PARAMETERS + 7

            ; --- Execute the command ---
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

           ; Set the colour to yellow
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_YELLOW & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            
; --- Corner 1: (X=60, Y=166) ---

            ; X1 = 121
            lda #121                 ; Low-byte of 60 is 60.
            sta API_PARAMETERS + 0
            lda #0                  ; High-byte of 60 is 0.
            sta API_PARAMETERS + 1
            
            ; Y1 = 166
            lda #166                ; Low-byte of 166 is 166.
            sta API_PARAMETERS + 2
            lda #0                  ; High-byte of 166 is 0.
            sta API_PARAMETERS + 3

; --- Corner 2: (X=119, Y=185) ---

            ; X2 = 180
            lda #180                ; Low-byte of 119 is 119.
            sta API_PARAMETERS + 4
            lda #0                  ; High-byte of 119 is 0.
            sta API_PARAMETERS + 5

            ; Y2 = 185
            lda #185                ; Low-byte of 185 is 185.
            sta API_PARAMETERS + 6
            lda #0                  ; High-byte of 185 is 0.
            sta API_PARAMETERS + 7

            ; --- Execute the command ---
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

           ; Set the colour to cyan
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_CYAN & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            
; --- Corner 1: (X=60, Y=166) ---

            ; X1 = 121
            lda #<181                 ; Low-byte of 60 is 60.
            sta API_PARAMETERS + 0
            lda #0>181                  ; High-byte of 60 is 0.
            sta API_PARAMETERS + 1
            
            ; Y1 = 166
            lda #166                ; Low-byte of 166 is 166.
            sta API_PARAMETERS + 2
            lda #0                  ; High-byte of 166 is 0.
            sta API_PARAMETERS + 3

; --- Corner 2: (X=119, Y=185) ---

            ; X2 = 240
            lda #<240                ; Low-byte of 119 is 119.
            sta API_PARAMETERS + 4
            lda #>240                  ; High-byte of 119 is 0.
            sta API_PARAMETERS + 5

            ; Y2 = 185
            lda #185                ; Low-byte of 185 is 185.
            sta API_PARAMETERS + 6
            lda #0                  ; High-byte of 185 is 0.
            sta API_PARAMETERS + 7

            ; --- Execute the command ---
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ;------------------- Small Square Blocks ------------------

           ; Set the colour to blue
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_BLUE & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            
; --- Corner 1: (X=60, Y=166) ---

            ; X1 = 0
            lda #<0                 ; Low-byte of 60 is 60.
            sta API_PARAMETERS + 0
            lda #0>0                  ; High-byte of 60 is 0.
            sta API_PARAMETERS + 1
            
            ; Y1 = 186
            lda #<186                ; Low-byte of 166 is 166.
            sta API_PARAMETERS + 2
            lda #>186                  ; High-byte of 166 is 0.
            sta API_PARAMETERS + 3

; --- Corner 2: (X=119, Y=185) ---

            ; X2 = 40
            lda #<40                ; Low-byte of 119 is 119.
            sta API_PARAMETERS + 4
            lda #>40                  ; High-byte of 119 is 0.
            sta API_PARAMETERS + 5

            ; Y2 = 230
            lda #<230                ; Low-byte of 185 is 185.
            sta API_PARAMETERS + 6
            lda #>230                  ; High-byte of 185 is 0.
            sta API_PARAMETERS + 7

            ; --- Execute the command ---
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

           ; Set the colour to magenta
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_MAGENTA & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            
; --- Corner 1: (X=60, Y=166) ---

            ; X1 = 81
            lda #<81                 ; Low-byte of 60 is 60.
            sta API_PARAMETERS + 0
            lda #0>0                  ; High-byte of 60 is 0.
            sta API_PARAMETERS + 1
            
            ; Y1 = 186
            lda #<186                ; Low-byte of 166 is 166.
            sta API_PARAMETERS + 2
            lda #>186                  ; High-byte of 166 is 0.
            sta API_PARAMETERS + 3

; --- Corner 2: (X=119, Y=185) ---

            ; X2 = 120
            lda #<120                ; Low-byte of 119 is 119.
            sta API_PARAMETERS + 4
            lda #>120                  ; High-byte of 119 is 0.
            sta API_PARAMETERS + 5

            ; Y2 = 230
            lda #<230                ; Low-byte of 185 is 185.
            sta API_PARAMETERS + 6
            lda #>230                  ; High-byte of 185 is 0.
            sta API_PARAMETERS + 7

            ; --- Execute the command ---
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

           ; Set the colour to dark grey
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_DARK_GREY & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            
; --- Corner 1: (X=60, Y=166) ---

            ; X1 = 161
            lda #<161                 ; Low-byte of 60 is 60.
            sta API_PARAMETERS + 0
            lda #0>0                  ; High-byte of 60 is 0.
            sta API_PARAMETERS + 1
            
            ; Y1 = 186
            lda #<186                ; Low-byte of 166 is 166.
            sta API_PARAMETERS + 2
            lda #>186                  ; High-byte of 166 is 0.
            sta API_PARAMETERS + 3

; --- Corner 2: (X=119, Y=185) ---

            ; X2 = 200
            lda #<200                ; Low-byte of 119 is 119.
            sta API_PARAMETERS + 4
            lda #>200                  ; High-byte of 119 is 0.
            sta API_PARAMETERS + 5

            ; Y2 = 230
            lda #<230                ; Low-byte of 185 is 185.
            sta API_PARAMETERS + 6
            lda #>230                  ; High-byte of 185 is 0.
            sta API_PARAMETERS + 7

            ; --- Execute the command ---
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

          ; Set the colour to white
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_WHITE & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            
; --- Corner 1: (X=60, Y=166) ---

            ; X1 = 201
            lda #<201                 ; Low-byte of 60 is 60.
            sta API_PARAMETERS + 0
            lda #0>201                  ; High-byte of 60 is 0.
            sta API_PARAMETERS + 1
            
            ; Y1 = 186
            lda #<186                ; Low-byte of 166 is 166.
            sta API_PARAMETERS + 2
            lda #>186                  ; High-byte of 166 is 0.
            sta API_PARAMETERS + 3

; --- Corner 2: (X=119, Y=185) ---

            ; X2 = 213
            lda #<213                ; Low-byte of 119 is 119.
            sta API_PARAMETERS + 4
            lda #>213                  ; High-byte of 119 is 0.
            sta API_PARAMETERS + 5

            ; Y2 = 230
            lda #<230                ; Low-byte of 185 is 185.
            sta API_PARAMETERS + 6
            lda #>230                  ; High-byte of 185 is 0.
            sta API_PARAMETERS + 7

            ; --- Execute the command ---
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

          ; Set the colour to light grey
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_LIGHT_GREY & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            
; --- Corner 1: (X=60, Y=166) ---

            ; X1 = 214
            lda #<214                 ; Low-byte of 60 is 60.
            sta API_PARAMETERS + 0
            lda #0>214                  ; High-byte of 60 is 0.
            sta API_PARAMETERS + 1
            
            ; Y1 = 186
            lda #<186                ; Low-byte of 166 is 166.
            sta API_PARAMETERS + 2
            lda #>186                  ; High-byte of 166 is 0.
            sta API_PARAMETERS + 3

; --- Corner 2: (X=119, Y=185) ---

            ; X2 = 226
            lda #<226                ; Low-byte of 119 is 119.
            sta API_PARAMETERS + 4
            lda #>226                  ; High-byte of 119 is 0.
            sta API_PARAMETERS + 5

            ; Y2 = 230
            lda #<230                ; Low-byte of 185 is 185.
            sta API_PARAMETERS + 6
            lda #>230                  ; High-byte of 185 is 0.
            sta API_PARAMETERS + 7

            ; --- Execute the command ---
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

; Set the colour to dark grey
            lda #API_FN_SET_COLOR
            sta API_FUNCTION
            lda #(COLOR_DARK_GREY & $0F)
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_SET_SOLID
            sta API_FUNCTION
            lda #1
            sta API_PARAMETERS + 0
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            lda #API_FN_DRAW_RECT
            sta API_FUNCTION
            
; --- Corner 1: (X=60, Y=166) ---

            ; X1 = 227
            lda #<227                 ; Low-byte of 60 is 60.
            sta API_PARAMETERS + 0
            lda #0>227                  ; High-byte of 60 is 0.
            sta API_PARAMETERS + 1
            
            ; Y1 = 186
            lda #<186                ; Low-byte of 166 is 166.
            sta API_PARAMETERS + 2
            lda #>186                  ; High-byte of 166 is 0.
            sta API_PARAMETERS + 3

; --- Corner 2: (X=119, Y=185) ---

            ; X2 = 240
            lda #<240                ; Low-byte of 119 is 119.
            sta API_PARAMETERS + 4
            lda #>240                  ; High-byte of 119 is 0.
            sta API_PARAMETERS + 5

            ; Y2 = 230
            lda #<230                ; Low-byte of 185 is 185.
            sta API_PARAMETERS + 6
            lda #>230                  ; High-byte of 185 is 0.
            sta API_PARAMETERS + 7

            ; --- Execute the command ---
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND


; Image

            lda #API_FN_BLITTER_BLIT_IMG
            sta API_FUNCTION
        @wait_api:
            lda API_COMMAND
            bne @wait_api

            ; Blit action
            lda #<0
            sta API_PARAMETERS + 0

            lda #<full_image_data
            sta API_PARAMETERS + 1

            lda #>full_image_data
            sta API_PARAMETERS + 2
            
            lda #<10
            sta API_PARAMETERS + 3
            lda #>0
            sta API_PARAMETERS + 4

            lda #<10
            sta API_PARAMETERS + 5
            lda #>0
            sta API_PARAMETERS + 6

            lda #>3
            sta API_PARAMETERS + 7

            lda #API_GROUP_BLITTER
            sta API_COMMAND

        .endmacro

target_x = 30
target_y = 50
target_color = 7

rectangle_data:
    .word full_image_data
    .byte 0 ; memory type (0 = RAM)
    .byte 0 ; pad byte (must be zero)
    .word 33 ; stride length (bytes per row = width/8)
    .byte 2 ; data format (2 = 1bpp)
    .byte 0 ; transparent color 
    .byte target_color ; solid color 
    .byte 20 ; height
    .word 264 ; width

full_image_data:
    .incbin "assets/full_bitriotdev.gfx"