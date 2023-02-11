//mt2022126
//umair beig
//25. create 3 child p..make parent wait for specific child

#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(){


int i=fork();

if(i==0){
printf("child %d of parent %d running\n",getpid(),getppid());	
sleep(5);
}
else{

   int j=fork();
   if(j==0){
        printf("child %d of parent %d running\n",getpid(),getppid());
	sleep(3);}
   else{
   int k=fork();
   if(k==0){
   printf("child %d of parent %d running\n",getpid(),getppid());
   sleep(2);
   
   }
   else{
   printf("parent %d waited for %d\n ",getpid(),i);
   waitpid(i,NULL,0);
  printf("parent done\n"); 
   
   }
   
   
   }



}
exit(0);
return 0;
}
