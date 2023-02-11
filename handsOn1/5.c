//mt2022126
//umair beig
//5.create 5 new files in inf loop and make it run in bg.
//check fd table in proc/pid/fd

#include<stdio.h>
#include<fcntl.h>
int main(){
int i=0;
while(1){
int fd1=open("i.txt",O_CREAT,0755);
int fd2=open("i+1.txt",O_CREAT,0755);
int fd3=open("i+2.txt",O_CREAT,0755);
int fd4=open("i+3.txt",O_CREAT,0755);
int fd5=open("i+4.txt",O_CREAT,0755);
i++;
}







}
