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

printf("\n sigalrm caught   \n");
getchar();
}

int main(){
struct itimerval t={{0,0},{10,10}};
signal(SIGALRM,signal_handler);
setitimer(ITIMER_REAL,&t,0);
sleep(2);
//sleep wouldnt matter bcz real time is taken into conderation
while(1);
return 0;
}
