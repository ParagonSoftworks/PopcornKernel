section .multiboot_header
header_start:
	; magic number for boot
	dd 0xe85250d6 ; multiboot2 needs this
	; what mode we pick for 32/64bit
	dd 0 ; protected 32
	; header length
	dd header_end - header_start
	; important checksum
	dd 0x100000000 - (0xe85250d6 + 0 + (header_end - header_start))

	; end tag
	dw 0
	dw 0
	dd 8
header_end:
