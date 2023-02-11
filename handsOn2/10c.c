//MT2022126
//umair ahmad beig
//10. Write a separate program using sigaction system call to catch the following signals.
// c. SIGFPE

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void myhandler(int x){

printf("caught\n");

printf("setting back to default\n");
//setting back to default
signal(SIGFPE,SIG_DFL);

}

int main(){
struct sigaction sa;
sa.sa_handler=myhandler;

sigaction(SIGFPE,&sa,NULL);
int a=10/0;
printf("%d",a);
sleep(3);


return 0;}
