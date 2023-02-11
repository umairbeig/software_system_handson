//MT2022126
//umair ahmad beig
//11. Write a program to ignore a SIGINT signal then reset the default action of the SIGINT signal -
//use sigaction system call.
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int main(){
struct sigaction sa;
sa.sa_handler=SIG_IGN;
sigaction(SIGINT,&sa,NULL);

sleep(3);

sa.sa_handler=SIG_DFL;
sigaction(SIGINT,&sa,NULL);
sleep(10);

return 0;}
