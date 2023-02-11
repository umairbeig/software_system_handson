//mt2022126
//umair beig
//1.create softlink,hardlink,fifo

#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){


int i=link(argv[1],argv[2]);
link(argv[1],argv[2]);
printf("status   :%d",i);

return 0;}
