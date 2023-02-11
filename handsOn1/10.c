//mt2022126
//umair beig
//10. write 10bytes into a file ..ignore 10...write 10 again
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){

int f;
char a[10];
printf("enter the first 10 bytes");
scanf("%s",&a);


f=open("file3.txt",O_RDWR);
lseek(f,0,SEEK_SET);
write(f,a,sizeof(a));


printf("enter the 10 chars");
scanf("%s",&a);

lseek(f,10,SEEK_CUR);
write(f,a,sizeof(a));
return 0;
}
