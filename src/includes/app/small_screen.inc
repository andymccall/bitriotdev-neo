    .macro small_screen

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
            lda #50               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #50               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<270               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>270               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<170               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>170               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

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
            lda #51               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #51               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<269               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>269               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<169               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>169               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

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
            lda #52               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #52               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<79               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<132               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #80              ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #52               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<106               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<132               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #107              ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #52               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<134               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<132               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #135              ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #52               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<162               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<132               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #163              ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #52               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<190               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<132               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #191            ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #52               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<218               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<132               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #219            ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #52               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<246               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<142               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ;---------------------- Small dashes ----------------------

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
            lda #52            ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #133               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<92               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<142               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #93            ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #133               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<140               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<142               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #135            ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #133               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<175               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<142               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #176            ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #133               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<218               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<142               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #52            ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #75               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<269               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>269               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<100               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

            ;---------------------- Small squares ----------------------

            ; Set the colour to Blue
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
            lda #52               ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #143               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<79               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<168               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #107              ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #143               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<134               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<168               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
            sta API_PARAMETERS + 7
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
            lda #<163              ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #<143               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<190               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<168               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
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
            lda #<191              ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #<143               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<200               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<168               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
            sta API_PARAMETERS + 7
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
            lda #<200              ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #<143               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<209               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<168               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
            sta API_PARAMETERS + 7
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
            lda #<210              ; Begin X low-byte
            sta API_PARAMETERS + 0
            lda #00               ; Begin X high-byte
            sta API_PARAMETERS + 1
            lda #<143               ; Begin Y low-byte
            sta API_PARAMETERS + 2
            lda #00               ; Begin Y high-byte
            sta API_PARAMETERS + 3
            lda #<218               ; End X low-byte
            sta API_PARAMETERS + 4
            lda #>0               ; End X high-byte
            sta API_PARAMETERS + 5
            lda #<168               ; End Y low-byte
            sta API_PARAMETERS + 6
            lda #>0               ; End Y high-byte
            sta API_PARAMETERS + 7
            lda #API_GROUP_GRAPHICS
            sta API_COMMAND

    .endmacro