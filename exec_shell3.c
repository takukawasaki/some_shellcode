#include <unistd.h>
#define MAX 2

int main(void)
{
     char *filename = "/bin/sh\x00";
     char *argv[MAX], *envp[1];
     
     argv[0] = filename;
     argv[1] = NULL;

     envp[0] = NULL;
     execve(filename, argv, envp);
     
     return 0;
}
