//MT2022126
//umair ahmad beig
//21. Write two programs so that both can communicate by FIFO -Use two way
// communications

//***********SECOND Process***************//




#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
int x=open("21fifo1",O_RDONLY,0744);
int y=open("21fifo2",O_RDWR,0744);
//client reading message
char buf[100];
while(1){

read(x,&buf,sizeof(buf));
printf("message from server to client: %s\n",buf);
perror("received");
// client sending message
printf("enter the message\n");
scanf("%s",&buf);
write(y,&buf,sizeof(buf));
perror("sent:");
}
return 0;
}
