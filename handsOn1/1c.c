#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
int main(){

int i;
i=mkfifo("fifo1",0777);
printf("created\n");

}
