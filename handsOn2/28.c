//MT2022126
//umair ahmad beig
//28. Write a program to change the exiting message queue 
//permission. (use msqid_ds structure)
#include<stdio.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
int main(){
key_t key=ftok(".",'a');
int msqid=msgget(key,0);

struct msqid_ds m;
msgctl(msqid,IPC_STAT,&m);
printf(" r pid: %d\n",m.msg_perm.mode);
//changing t 777
m.msg_perm.mode=0777;
msgctl(msqid,IPC_SET,&m);
struct msqid_ds x;
msgctl(msqid,IPC_STAT,&x);
printf("access updated to %d \n",x.msg_perm.mode);
return 0;



}

