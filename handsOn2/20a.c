//MT2022126
//umair ahmad beig
//20. Write two programs so that both can communicate by FIFO -Use one way
// communication


//********************sender***********************//
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
int y=open("20fifo",O_RDWR,0744);
char buf[80];
while(1){
printf("enter the message\n");
scanf("%s",&buf);
write(y,&buf,sizeof(buf));
}

}
