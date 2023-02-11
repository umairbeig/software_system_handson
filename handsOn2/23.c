//MT2022126
//umair ahmad beig
//23.max files that can be opened by a process and circular buff capacity
#include<stdio.h>
#include <sys/resource.h>
#include<unistd.h>
int main(){
struct rlimit curr;

getrlimit(RLIMIT_NOFILE,&curr);
printf("max open files:%d\n",curr.rlim_cur);
int szpipe=pathconf("20fifo",_PC_PIPE_BUF);
printf("circular buff:%d",szpipe);
return 0;







}
