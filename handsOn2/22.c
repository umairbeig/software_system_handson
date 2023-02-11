//MT2022126
//umair ahmad beig
//22. Write a program to wait for data to be written into FIFO within 10 
//seconds, use select system call with FIFO.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/select.h>
#include<time.h>
int main(){
int fd=open("22fifo",O_RDONLY,0744);

fd_set fdset;
struct timeval t;
int success;

FD_ZERO(&fdset);
FD_SET(fd,&fdset);

t.tv_sec=5;
t.tv_usec=0;

success=select(1,&fdset,NULL,NULL,&t);
printf("%d\n",success);
if(success==-1){
printf("error\n");}
else if(success){
printf("data available\n");
char buff[100];
read(fd,&buff,sizeof(buff));
printf("%s\n",buff);
}
else{
printf("no data in fifo\n");
}

}
