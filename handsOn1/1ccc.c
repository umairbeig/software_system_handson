#include<stdio.h>
#include<fcntl.h>
int main(){

int fd=open("fifo1",O_RDONLY);
char m[100];
read(fd,&m,sizeof(m));

printf("%s\n",m);


return 0;}
