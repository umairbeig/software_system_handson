//MT2022126
//umair ahmad beig
//16.16. Write a program to send and receive data from parent to child 
//vice versa. Use two way communication.



#include<stdio.h>
#include<unistd.h>
int main(){

int fd1[2];
int fd2[2];
pipe(fd1);
pipe(fd2);

char buff[10];
char buff2[10];

if(fork()==0){
sleep(1);
read(fd1[0],buff,sizeof(buff));
printf("msg from parent: %s\n",buff);

//child writes so close w of parent and read of child.e,g.child uses p2
close(fd2[0]);
close(fd1[1]);
write(fd2[1],"hello pop",10);

}

else{

//e,g parent uses pipe 1 to write

close(fd1[0]);
close(fd2[1]);
write(fd1[1],"hi child",10);
wait(1);
read(fd2[0],buff2,sizeof(buff2));
printf("msg from child:  %s\n",buff2);


return 0;





}






return 0;
}
