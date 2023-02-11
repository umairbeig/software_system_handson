//MT2022126
//umair ahmad beig
//10. Write a separate program using sigaction system call to catch the following signals.
// b. SIGINT

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void myhandler(int x){

printf("caught\n");
}

int main(){
struct sigaction sa;
sa.sa_handler=myhandler;

sigaction(SIGINT,&sa,NULL);
sleep(3);


return 0;}
