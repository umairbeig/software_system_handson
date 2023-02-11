//MT2022126
//umair ahmad beig
//17.b using dup2

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(){
int fd[2];
pipe(fd);

if(fork()==0){
//child
close(fd[0]);
dup2(fd[1],1);
execlp("ls","ls","-Rl",NULL);

}
else{
wait(1);
close(fd[1]);
dup2(fd[0],0);
execlp("wc","wc",NULL);
exit(0);
}



}
