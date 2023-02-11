//mt2022126
//umair beig
//12. opening mode of a file
#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>


int main(){
struct stat u;
int fd=open("file4.txt",O_RDWR);
fstat(fd,&u);
printf("file mode :    %d    ",u.st_mode);
return 0;



}
