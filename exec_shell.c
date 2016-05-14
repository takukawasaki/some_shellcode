#include <unistd.h>

int main()
{
     char *argv[] = {"/bin/sh",NULL};
     execvp(argv[0],argv);

}
