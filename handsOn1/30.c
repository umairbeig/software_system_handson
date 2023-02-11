//mt2022126
//umair beig
//daemon process

#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>
int main(){
int cpid=fork();
if(cpid==0){
printf("child %d --of---parent %d\n",getpid(),getppid());
sleep(3);

}
else{
printf("parent:%d abt to exit\n",getpid());
sleep(1);
exit(0);

}

umask(0);
int sid=setsid();
chdir("/");
printf(" child %d --of---parent %d\n",getpid(),getppid());

close(STDIN_FILENO);
close(STDOUT_FILENO);
close(STDERR_FILENO);

while(1){
printf("hi i am a demon\n");
sleep(10);
break;

}
return 0;
}
