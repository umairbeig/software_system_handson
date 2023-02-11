//mt2022126
//umair beig
//19. time stamp counter

#include<stdio.h>
#include<sys/time.h>
#include<unistd.h>
unsigned long  rdtsc(){
unsigned long  d;
asm volatile("rdtsc" : "=a" (a), "=d" (d));

}

int main(){
unsigned long s=rdtsc();
getpid();
unsigned long x=rdtsc();
int time=(x-s)/2.5;
printf("time taken is %d ns\n",time);
return 0;

}
