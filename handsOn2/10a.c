//MT2022126
//umair ahmad beig
//10. Write a separate program using sigaction system call to catch the following signals.
// a. SIGSEGV
// b. SIGINT
// c. SIGFPE

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void myhandler(int x){

printf("caught\n");

printf("setting back to default\n");
//setting back to default
signal(SIGSEGV,SIG_DFL);

}

int main(){
struct sigaction sa;
sa.sa_handler=myhandler;

sigaction(SIGSEGV,&sa,NULL);
int a[2];
printf("%d",a[10000]);
sleep(3);


return 0;}
