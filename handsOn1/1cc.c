//sender
#include<stdio.h>
#include<fcntl.h>
int main(){

int f=open("fifo1",O_WRONLY);
char message[20];
printf("enter the message\n");
scanf("%s",&message);
write(f,&message,sizeof(message));
printf("sent\n");
return 0;
}
