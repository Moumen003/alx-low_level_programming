section 	.text
	extern	printf
	global	main
main:
	mov		edi, mesg
	mov		eax, 0
	call	printf
section		.data
	mesg db	'Hello, Holberton' , 0xa, 0
