//MT2022126
//umair ahmad beig
//3. Write a program to set (any one) system resource limit. Use setrlimit system call.
#include<stdio.h>
#include<sys/resource.h>

int main(){

struct rlimit x;

getrlimit(RLIMIT_NOFILE,&x);
printf("open files (fds) %d\n",x.rlim_cur);

//by default no of fds is set to unlimited ie -1 will be printed
x.rlim_cur=5566;
x.rlim_max=100000;
setrlimit(RLIMIT_NOFILE,&x);
perror("setrlimit:");
getrlimit(RLIMIT_LOCKS,&x);
printf("locks (-x) %d\n",x.rlim_cur);

x.rlim_cur=9900;
x.rlim_max=100000;
setrlimit(RLIMIT_LOCKS,&x);
perror("setrlimit:");
return 0;}
