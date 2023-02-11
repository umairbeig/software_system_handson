//MT2022126
//umair ahmad beig
//29. Write a program to remove the message queue.

#include<stdio.h>
#include<sys/ipc.h>
int main()
{
key_t key;
key=ftok(".",'a');
int mgqid=msgget(key,0);
msgctl(mgqid,IPC_RMID,NULL);
perror("removing status:");
return 0;

}
