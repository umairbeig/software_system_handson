//mt2022126
//umair beig
//4. open an already exixting file and give readonly permissions
#include<stdio.h>
#include<fcntl.h>
void main(){

int n=open("file1.txt",O_CREAT|O_EXCL|O_RDONLY,0777);
printf("%d",n);
return;
}
