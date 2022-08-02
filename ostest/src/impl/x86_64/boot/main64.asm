global long_mode_start
; referencing our C file
extern kernel_main

section .text
; ohhh yeah 64 bit mode!
bits 64
; 1. im forgetting what this does
; 2. im assuming it's allowing us to run C files
long_mode_start:
    mov ax, 0
    mov ss, ax
    mov ds, ax
    mov es, ax
    mov fs, ax
    mov gs, ax
    
    ; and here on out everything is handled by C
    call kernel_main
    ; sadly though i didn't think so far through
    ; so no matter what i put in i don't know if
    ; it even works idk if it does something else
    ; or it halts as ive done testing attempting
    ; to run a kinda input but it did nothing
    ; so essentially i think it was bad programming
    ; or i need to do "bug fix"
    hlt


; well done! now you know our kernel works!
; have fun modifying it!
