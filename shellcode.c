
int main(void)
{
         char shellcode[] =
              "\x48\x83\xec"                                  // xor    %rdx, %rdx
              "\x28\31\xc0"
              "\x48\x8d\x54\x24"                              // shr    $0x8, %rbx
              "\x01"                                          // push   %rbx
              "\xff\xd2\x31"                                  // mov    %rsp, %rdi
              "\xc0"                                          // push   %rax
              "\x48"                                          // push   %rdi
              "\x83\xc4\x28"                                  // mov    %rsp, %rsi
              "\xc3";

         (*(void (*)()) shellcode)();

         return 0;
         
}
