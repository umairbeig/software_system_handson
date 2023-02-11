//mt2022126
//umair beig
//7.copy file1 into file2

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){

char arr[200];
int fn=open("file2.txt",O_CREAT|O_RDWR,0777);
int f=open("file1.txt",O_RDONLY,0755);

read(f,arr,200);
write(fn,arr,200);







return 0;}
