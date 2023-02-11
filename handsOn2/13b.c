//MT2022126
//umair ahmad beig
//13. Write two programs: first program is waiting to catch SIGSTOP signal, the second program
//will send the signal (using kill system call). Find out whether the first program is able to catch
//the signal or not.



//result::: if the pid of the first proces is fed to the kill+ SIGKILL,its stops the 
//first process 13a.c exe


#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<sys/wait.h>


int main(){

struct sigaction sa;

kill(5596,SIGSTOP);
return 0;}
