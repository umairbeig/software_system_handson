//umair beig
//get scheduling policy and modify it
#include<stdio.h>
#include<sched.h>
#include<unistd.h>
int main(){
int x=sched_getscheduler(0);
if(x==SCHED_FIFO){
printf("fifo\n");}
else if(x==SCHED_RR){
printf("rr\n");
}
else{
printf("others\n");}

struct sched_param p;
p.sched_priority=2;
//run in sudo
sched_setscheduler(0,SCHED_FIFO,&p);
x=sched_getscheduler(0);
if(x==SCHED_FIFO){
printf("fifo\n");}

else if(x==SCHED_RR){
printf("rr\n");
}

else{
printf("others\n");}


return 0;

}
