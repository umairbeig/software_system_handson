//MT2022126
//umair ahmad beig
//25. Write a program to print a message queue's (use msqid_ds and ipc_perm structures)
// a. access permission
//b. uid, gid
// c. time of last message sent and received
// d. time of last change in the message queue
// d. size of the queue
// f. number of messages in the queue
// g. maximum number of bytes allowed
// h. pid of the msgsnd and msgrcv

#include<stdio.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
int main(){
key_t key=ftok(".",'a');
int msqid=msgget(key,IPC_CREAT|0777);

struct msqid_ds m;
msgctl(msqid,IPC_STAT,&m);
printf("permissions:%d\n",m.msg_perm.mode);
printf("uid is : %d\n",m.msg_perm.uid);
printf("gid is : %d\n",m.msg_perm.gid);
printf("last sent  : %d,last receive: %d last change:\n",m.msg_stime,m.msg_rtime,m.msg_ctime);
printf("max len is : %d\n",m.msg_qbytes);
printf("curr len is : %d\n",m.msg_cbytes);
printf("curr messages : %d\n",m.msg_qnum);
printf("sender pid: %d\n",m.msg_lspid);
printf(" r pid: %d\n",m.msg_lrpid);

return 0;



}

