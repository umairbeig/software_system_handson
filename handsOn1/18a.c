//mt2022126
//umair beig
//18a,b,c: implement record locking;

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){

struct {
int trainno;
int tno;

}train[3];

int fd=open("booking.txt",O_CREAT|O_RDWR,0777);

for(int i=0;i<3;i++){

train[i].trainno=i+1;
train[i].tno=0;

}

write(fd,train,sizeof(train));
close(fd);
return 0;
}
