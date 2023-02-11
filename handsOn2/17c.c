//MT2022126
//umair ahmad beig
//17.c using fcntl

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
//close read end of pipe

//replace stdout by fd[1]
close(1);
fcntl(fd[1],F_DUPFD,1);
execlp("ls","ls","-l",NULL);

}
else{
wait(1);
//close write end of pipe
close(fd[1]);
//replace stdin by fd[0]
close(0);
fcntl(fd[0],F_DUPFD,0);
execlp("wc","wc",NULL);
exit(0);
}



}




