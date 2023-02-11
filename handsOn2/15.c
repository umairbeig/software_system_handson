//MT2022126

//umair ahmad beig

//15. Write a simple program to send some data from parent to the child.


#include<stdio.h>
#include<unistd.h>

int main(){
int fd[2];
pipe(fd);
char buff[10];
//child
if(fork()==0){
sleep(1);
close(fd[1]);
read(fd[0],buff,sizeof(buff));
printf("%s\n",buff);
}
//parent
else{
close(fd[0]);
write(fd[1],"hi child",sizeof(buff));
wait(1);
exit(0);
}




}
