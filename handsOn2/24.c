//MT2022126
//umair ahmad beig
//24. Write a program to create a message queue and print the key 
//and message queue id.

#include<stdio.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
int main(){
key_t key =ftok(".",'a');
int msqid=msgget(key,IPC_CREAT|IPC_EXCL|0744);

printf("msg queue id is : %d \n",msqid);

printf("they key assigned is 0x%0x:\n",key);

return 0;



}

