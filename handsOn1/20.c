//mt2022126
//umair beig
//get priority of the p,modify it using nice command

#include<stdio.h>
#include<sys/resource.h>
int main(){
//which//who:pid//
int p=getpriority(PRIO_PROCESS,getpid());
printf("%d   ",p);

for(;;);

return 0;
}
