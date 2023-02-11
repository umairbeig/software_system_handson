//mt2022126
//umair beig
//make parent and child write to a file..check its contents at the end


#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
int k=fork();
char a[100];
int fd=open("22.txt",O_CREAT|O_RDWR,0777);
if(k==0){
//child process
printf("hey child,enter some data\n");
scanf(" %s",&a);
write(fd,&a,sizeof(a));
}
else{


wait(NULL);
char b[100];
printf("hey parent , enter some data\n");
scanf(" %s",&a);
lseek(fd,0,SEEK_END);
write(fd,&a,sizeof(a));

}

return 0;
}
