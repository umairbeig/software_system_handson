//MT2022126
// umair ahmad beig

//26. Write a program to send messages to the message queue. Check 
//$ipcs -q
#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

int main(){

key_t key=ftok(".",'a');

int msqid=msgget(key,IPC_CREAT|0777);

struct msg{
long int  mtype;
char message[80];
}mg;
printf("enter the message type\n");
scanf("%ld",&mg.mtype);

printf("enter the message\n");
scanf("%s",&mg.message);
int i=msgsnd(msqid,&mg,strlen(mg.message),0);
printf("message sent status :%d\n",i);
return 0;
}
