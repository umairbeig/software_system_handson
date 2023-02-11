//MT2022126
//umair ahmad beig
//20. Write two programs so that both can communicate by FIFO -Use one way 
//communication

//*****************receiver******************//
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
int y=open("20fifo",O_RDONLY,0744);
char buf[80];
while(1){

read(y,&buf,sizeof(buf));
printf("%s\n",buf);
perror("mgs received:");
}

}
