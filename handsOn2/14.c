//MT2022126

// umair ahmad beig

//14. Write a simple program to create a pipe, write to the pipe, read from pipe and display on the monitor.


#include<stdio.h>
#include<unistd.h>

int main(){
int fd[2];
char buff[10];

pipe(fd);

write(fd[1],"hello",6);

read(fd[0],buff,6);

printf("%s\n",buff);
return 0;




}
