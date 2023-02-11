//MT2022126
//umair ahmad beig
//27. Write a program to receive messages from the message queue.
// a. with 0 as a flag
// b. with IPC_NOWAIT as a flag

#include<stdio.h>
#include<sys/msg.h>
#include<sys/ipc.h>
int main(){

struct msg{
long  mtype;
char message[80];
}mg;

key_t key;
key=ftok(".",'a');
int msqid=msgget(key,0);
printf("enter the mtype of msg to be received\n");
long int t;
scanf("%ld",&t);
int i=msgrcv(msqid,&mg,sizeof(mg.message),t,0);
printf("receiving status=%d \n",i);
printf("the message :: %s\n",mg.message);
return 0;
}
