#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
struct flock f;
int fd=open("db",O_CREAT|O_RDWR,0744);
struct {
int tno;
}ticket;




f.l_type=F_WRLCK;
f.l_whence=SEEK_SET;
f.l_start=0;
f.l_len=0;
f.l_pid=getpid();

printf("locking  \n");
fcntl(fd,F_SETLKW,&f);
read(fd,&ticket,sizeof(ticket));
printf("initial value of file :%d\n",ticket.tno);
printf("cs**********\n");

printf("updating\n");
ticket.tno++;

lseek(fd,0,SEEK_SET);
write(fd,&ticket,sizeof(ticket));

printf("ticket updated to  :%d\n",ticket.tno);
getchar();
f.l_type=F_UNLCK;
fcntl(fd,F_SETLK,&f);
printf("exit\n");
close(fd);

return 0;}
