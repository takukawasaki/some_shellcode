#include <unistd.h>

int main(void)
{
     char *arglist[] = {"/bin/sh",NULL};

     execv(arglist[0],arglist);
     return 0;
}
