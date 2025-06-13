.include "includes/system/neo6502.asm"

.org $800
.segment "STARTUP"

   jmp start

; API includes
   .include "includes/api/br_text.inc"
   .include "includes/api/br_screen.inc"

; App includes
   .include "includes/app/menu.inc"
;   .include "includes/app/full_screen.inc"
;   .include "includes/app/small_screen.inc"

start:

  lda API_SOUND_CH_00    ; sound channel               (API::sound->play->channel)
  sta API_PARAMETERS + 0 ; set API 'Parameter0'        (API::sound->play->channel)
  lda API_SFX_COIN       ; sound effect index          (API::sound->play->effect)
  sta API_PARAMETERS + 1 ; set API 'Parameter1'        (API::sound->play->effect)
  lda API_FN_PLAY_SOUND  ; sound effect function       (API::sound->play)
  sta API_FUNCTION       ; set API 'Function'          (API::sound->play)
  lda API_GROUP_SOUND    ; 'Sound' API function group  (API::sound)
  sta API_COMMAND        ; trigger 'Sound' API routine (API::sound)

    br_screen_clear

    jsr menu_draw

end:
    jmp end                ; infinite loop

loading_msg:     .byte "Loading Bitriot.dev...",0