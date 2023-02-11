//MT2022126
//umair ahmad beig
//17. Write a program to execute ls -l | wc.
// a. use dup



#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
int fd[2];
pipe(fd);
if(fork()==0){
//child
//needs to write
//so close read
close(1);
dup(fd[1]);
close(fd[0]);
execlp("ls","ls","-l",NULL);

}
else{
wait(1);
close(fd[1]);
//needs to read from pipe so close write
close(0);
dup(fd[0]);
execlp("wc","wc",NULL);
}



return 0;
}
