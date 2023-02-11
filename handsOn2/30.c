//MT2022126
//umair ahmad beig
//30. Write a program to create a shared memory.
// a. write some data to the shared memory
// b. attach with O_RDONLY and check whether you are able to overwrite.
// c. detach the shared memory
// d. remove the shared memory
#include<stdio.h>
#include<stdlib.h>

#include<sys/shm.h>
#include<sys/ipc.h>

int main(){

int key;
char * data;
key=ftok(".",'c');
//create

int shmid=shmget(key,1024,IPC_CREAT|0744);
perror("shared memory creation:");


//attach
printf("1 for readonly------------2 for readwrite\n");
int x;
scanf("%d",&x);
switch(x){


case 2:
       data=shmat(shmid,0,0);
        break;
case 1:
      data=shmat(shmid,0,SHM_RDONLY);
      break;

}

perror("attach : ");
//write
printf("enter the data\n");
scanf("%s",data);
perror("write:");

printf("press enter to detatch and delete");
getchar();
//reading from another
getchar();

//detatch

shmdt(data);
perror("detatch status");

//detele
shmctl(shmid,IPC_RMID,NULL);
perror("deteted");


return 0;
}
