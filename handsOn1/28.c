//mt2022126
//umair beig
//28.max and min rt priority

#include<stdio.h>
#include<sched.h>
int main(){

printf("max rt priority:  %d\n",sched_get_priority_max(SCHED_FIFO));
printf("min rt priority:   %d\n",sched_get_priority_min(SCHED_RR));
return 0;


}
