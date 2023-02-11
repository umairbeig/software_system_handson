//MT2022126
//umair ahmad beig
//2. Write a program to print the system resource limits. Use getrlimit system call. 

#include<stdio.h>
#include<sys/resource.h>

int main(){

struct rlimit x;

getrlimit(RLIMIT_NOFILE,&x);
printf("open files (fds) %d\n",x.rlim_cur);
//*************//unlimited  values will be printed as -1**********//
getrlimit(RLIMIT_FSIZE,&x);
printf("file size %d\n",x.rlim_cur);
getrlimit(RLIMIT_NICE,&x);
printf("nice value %d\n",x.rlim_cur);
getrlimit(RLIMIT_DATA,&x);
printf("memory size %d\n",x.rlim_cur);
getrlimit(RLIMIT_MEMLOCK,&x);
printf("locked memory %d\n",x.rlim_cur);
getrlimit(RLIMIT_LOCKS,&x);
printf("locks (-x) %d\n",x.rlim_cur);
getrlimit(RLIMIT_CORE,&x);
printf("core file size %d\n",x.rlim_cur);
return 0;}
