//mt2022126
//umair beig
//21. use fork print pid and ppid

#include<sys/types.h>
#include<stdio.h>
int main()

{
if(!fork()){

printf("child process id  %d\n :   ",getpid());
printf("its parent pid %d\n",getppid());
}
else{printf("parent process id %d\n",getpid());}

wait(0);

return 0;}
