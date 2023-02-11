//MT2022126
//umair ahmad beig
//12. Write a program to create an orphan process. Use kill system call to send SIGKILL signal to
//the parent process from the child process

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){

if(fork()==0){
sleep(1);
printf("i am the child of %d\n",getppid());
kill(getppid(),SIGKILL);
printf("my parent:  %d\n",getppid());
}
else{
printf("i a the parent with pid : %d\n",getpid());
wait(10);
}

return 0;}
