//mt2022126
//umair beig
//16a. implement write lock
//16b. implement read lock 

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
int main(){

struct flock f;
int fd=open("locking.txt",O_CREAT|O_RDWR);


f.l_type=F_WRLCK;
f.l_whence=SEEK_SET;
f.l_start=0;
f.l_len=0;
f.l_pid=getpid();

printf("before entering cs*******\n\n");


fcntl(fd,F_SETLKW,&f);

printf("lock applied\n\n");
getchar();
f.l_type=F_UNLCK;
fcntl(fd,F_SETLK,&f);
printf("unlocked");


return 0;

}
