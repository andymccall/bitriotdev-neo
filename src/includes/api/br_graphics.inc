br_wait_for_vsync:

@loop:
    lda #API_FN_FRAME_COUNT
    sta API_FUNCTION
@wait_api:
    lda API_COMMAND
    bne @wait_api
    lda #API_GROUP_GRAPHICS
    sta API_COMMAND

    lda API_PARAMETERS + 0
    cmp last_frame_count + 0
    bne @synced

    lda API_PARAMETERS + 1
    cmp last_frame_count + 1
    bne @synced

    lda API_PARAMETERS + 2
    cmp last_frame_count + 2
    bne @synced

    lda API_PARAMETERS + 3
    cmp last_frame_count + 3
    bne @synced

    jmp @loop

@synced:
    lda API_PARAMETERS + 0
    sta last_frame_count + 0
    lda API_PARAMETERS + 1
    sta last_frame_count + 1
    lda API_PARAMETERS + 2
    sta last_frame_count + 2
    lda API_PARAMETERS + 3
    sta last_frame_count + 3

    rts

last_frame_count:   .res 4