//MT2022126
//umair ahmad beig
//21. Write two programs so that both can communicate by FIFO -Use two way
// communications

//***********first sender***************//
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
//mkfifo("21fifo",0744);
int x=open("21fifo1",O_RDWR,0744);
int y=open("21fifo2",O_RDONLY,0744);


char buf[100];

//server sending message
while(1){
printf("enter the message\n");
scanf("%s",&buf);
write(x,&buf,sizeof(buf));
perror("sent:");

//receiving message
read(y,&buf,sizeof(buf));
printf("message from client: %s\n",buf);

}
return 0;
}
