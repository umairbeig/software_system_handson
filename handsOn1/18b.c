#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
struct {
int trainno;
int tno;
}record;

int index;
printf("enter the train no for booking");
scanf("%d",&index);

int fd=open("booking.txt",O_RDWR,0777);
struct flock f;
f.l_type=F_WRLCK;
f.l_whence=SEEK_SET;
f.l_start=(index-1)*sizeof(record);
f.l_len=sizeof(record);
f.l_pid=getpid();

printf("entering cs\n");
fcntl(fd,F_SETLKW,&f);
printf("locked\n");
lseek(fd,(index-1)*sizeof(record),SEEK_SET);
read(fd,&record,sizeof(record));

printf("initial ticket count : %d\n",record.tno);

printf("booking the ticket\n");
printf("***********\n");
record.tno++;
printf("updating\n");
lseek(fd,-1*(sizeof(record)),SEEK_CUR);
write(fd,&record,sizeof(record));
printf("press enter to unlock");
getchar();
f.l_type=F_UNLCK;
fcntl(fd,F_SETLK,&f);
printf("exit");
return 0;
}
