#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main(){

struct flock l;
int fd=open("locking.txt",O_CREAT|O_RDWR);

l.l_whence=SEEK_SET;
l.l_type=F_WRLCK;
l.l_start=0;
l.l_len=0;
l.l_pid=getpid();

printf("acquiring the lock    \n");
fcntl(fd,F_SETLKW,&l);
printf("entered into cs***********");
printf("press enter to unlock");
getchar();
l.l_type=F_UNLCK;
fcntl(fd,F_SETLK,&l);
printf("unlocked and exit\n");




return 0;
}

