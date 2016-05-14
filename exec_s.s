BITS 64


.LC0:
	.string	"/bin/sh"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-16], OFFSET FLAT:.LC0
	mov	QWORD PTR [rbp-8], 0
	mov	rax, QWORD PTR [rbp-16]
	lea	rdx, [rbp-16]
	mov	rsi, rdx
	mov	rdi, rax
	call	execvp
	mov	eax, 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 5.3.0"
	.section	.note.GNU-stack,"",@progbits
