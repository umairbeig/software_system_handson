//MT2022126
//umair ahmad beig
//13. Write two programs: first program is waiting to catch SIGSTOP signal, the second program
//will send the signal (using kill system call). Find out whether the first program is able to catch
//the signal or not.

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/wait.h>

void myhandler(int x){

printf("SIGSTOP caught\n");

}

int main(){
printf("mypid is %d :\n",getpid());
signal(SIGSTOP,myhandler);
while(1);
return 0;}
