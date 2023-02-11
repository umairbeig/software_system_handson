//MT2022126
//umair ahmad beig
//31. Write a program to create a semaphore and initialize value to the semaphore.
// a. create a binary semaphore


#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/sem.h>
int main(){

int key=ftok(".",'e');
//semaphone array
int semid=semget(key,1,IPC_CREAT|0744);

union semun{
int val;
struct semid_ds *buffer;
unsigned short * array;
};
union semun u;

printf(" initializing binary semaphore\n");
u.val=1;
semctl(semid,0,SETVAL,u);
perror("initialized");

return 0;
}
