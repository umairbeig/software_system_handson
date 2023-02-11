//MT2022126
//umair ahmad beig
//1. Write a separate program (for each time domain) to set a interval timer
// in 10sec and 10micro second
// a. ITIMER_REAL
// b. ITIMER_VIRTUAL
// c. ITIMER_PROF

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<sys/time.h>
void signal_handler(int n){

printf("\n sigvtalrm caught   \n");
getchar();
}

int main(){
struct itimerval t={{0,0},{10,10}};
signal(SIGVTALRM,signal_handler);
setitimer(ITIMER_VIRTUAL,&t,0);
while(1);
sleep(2);

//so basically it should take 12"10  secs to raise alarm
return 0;
}
