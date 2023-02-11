//mt2022126
//umair beig
//take input from stdin and display on stdout using read and write system calls
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
char arr[10];
read(0,arr,10);
write(1,arr,10);







return 0;
}

