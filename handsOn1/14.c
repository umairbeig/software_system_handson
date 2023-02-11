#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
int main(int argc, char *argv[]){
int f=open(argv[1],O_RDWR);
struct stat u;
fstat(f,&u);
if(S_ISFIFO(u.st_mode)){
printf("fifo\n");
}
else if(S_ISREG(u.st_mode)){
printf("regular fle \n");
}
else if(S_ISBLK(u.st_mode)){
printf("block file \n");//drive
}
else if(S_ISLNK(u.st_mode)){
printf("symbolic link \n");
}
else if(S_ISCHR(u.st_mode)){
printf("character file \n");//term
}
else if(S_ISSOCK(u.st_mode)){
printf("socket file \n");
}
else{
printf("others");
}
}
