//mt2022126
//umair beig
//23.zombie state
#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
int  main(){


int k=fork();
//child
if(k==0){
printf("child process\n");	
exit(0);
}
else{

printf("parent\n");
sleep(5);

}








}

