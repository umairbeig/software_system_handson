//mt2022126
//umair beig
//17a,b. online ticket reservation using mandatory locking
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
struct {
int tno;
}ticket;

ticket.tno=5;
int fd=open("db",O_CREAT|O_RDWR,0744);
write(fd,&ticket,sizeof(ticket));
close(fd);

int f=open("db",O_RDWR,0744);
read(f,&ticket,sizeof(ticket));
printf("ticket no:     %d",ticket.tno);

close(f);




}

