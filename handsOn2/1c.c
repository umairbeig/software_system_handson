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
signal(SIGPROF,signal_handler);
setitimer(ITIMER_PROF,&t,0);
sleep(2);
while(1);

//so basically it should take  **** 12secs 10 usecs****  secs to raise alarm
//bcz it takes the time cpu is utilized by a process or the sys on behalf of it
return 0;
}
