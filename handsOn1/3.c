//mt2022126
//umairbeig
//3. create file using creat()and print the file descriptor value//
#include<stdio.h>
#include<fcntl.h>

void main(){

int n=creat("file1.txt",0755);
printf("%d",n);
return;








}
