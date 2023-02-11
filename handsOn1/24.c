//mt2022126
//umair beig
//24.orphan process

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
int main(){

int k=fork();
if(k==0){
//child
sleep(5);
printf("child running\n");
printf("ppid : %d\n",getppid());
}

else{
//parent
printf("pid parent %d \n",getpid());
exit(0);
}







}
