#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
char * arg[]={"26a.c",NULL};
execl(arg[0],arg);
printf("*************\n");

}
