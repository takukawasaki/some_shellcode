#include "hacking.h"


int main(int argc, char *argv[])
{
     int userid, fd; //ファイル記述子
     char *buffer, *datafile;
     
     buffer = (char *)ec_malloc(100);
     datafile = (char *)ec_malloc(20);
     strcpy(datafile,"/tmp/notes");
     
     if (argc < 2) {
          usage(argv[0], datafile);
     }
     
     strcpy(buffer, argv[1]);
     
     printf("[DEBUG] buffe @ %p: \'%s\'\n", buffer, buffer);
     printf("[DEBUG] datafile @ %p: \'%s\'\n",datafile,datafile);

     strncat(buffer, "\n", 1);
     
     fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND,S_IRUSR|S_IWUSR);
     if (fd == -1) {
          fatal("main() error occured.");
     }
     printf("[DEBUG] filefd:%d\n", fd);

     userid = getuid();

     if (write(fd, &userid, 4) == -1) {
          fatal("main() write to userid error.");
     }
     write(fd,"\n", 1);
     
     if (write(fd,buffer, strlen(buffer)) == -1) {
          fatal("main() error occured.");
     }
     write(fd, "\n", 1);

     if (close(fd) == -1) {
          fatal("main() error occured.");
     }
     printf("save memo.");
     free(buffer);
     free(datafile);
}
