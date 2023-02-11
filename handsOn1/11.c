//mt2022126
//umair beig
//11. use dup,dup2,fcntl
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){

int f=open("file4.txt",O_CREAT|O_RDWR|O_APPEND,0777);
char a[10];
printf("enter the string");
scanf("%s",&a);
write(f,a,sizeof(a));


int f1=dup(f);
printf("enter the string");
scanf("%s",&a);
//lseek(f1,0,SEEK_END);
write(f1,a,sizeof(a));

int f2;
dup2(f,7);
printf("enter the string");
scanf("%s",&a);
//lseek(f2,0,SEEK_END);
write(f1,a,sizeof(a));

int f3=fcntl(f,F_DUPFD);
printf("enter the string");
scanf("%s",&a);
//lseek(f3,0,SEEK_END);
write(f3,a,sizeof(a));

return 0;
}

