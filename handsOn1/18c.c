#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(){

struct {

int t;
int c;
}train;
int index;
printf("enter the train no u want to enquire about ");
scanf("%d",&index);
int fd=open("booking.txt",O_RDONLY);
struct flock rl;
rl.l_type=F_RDLCK;
rl.l_start=(index-1)*sizeof(train);
rl.l_len=sizeof(train);
rl.l_whence=SEEK_SET;
rl.l_pid=getpid();

printf("applying read lock\n");
fcntl(fd,F_SETLKW,&rl);
printf("entered into cs*****\n");

lseek(fd,(index-1)*sizeof(train),SEEK_SET);


read(fd,&train,sizeof(train));

printf("train no:      %d\n",train.t);
printf("ticket count:  %d ",train.c);


getchar();

rl.l_type=F_UNLCK;
fcntl(fd,F_SETLK,&rl);

printf("exit");

}
