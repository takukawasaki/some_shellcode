  .intel_syntax noprefix
  .global _start

_start:
  push 0xb5058b48
  push 0x08ec8348
  mov rbx, rsp
  xor rdx, rdx
  push rdx
  push rbx
  mov rcx, rsp
  mov rax, 4749092
  int 0x80

  
  
