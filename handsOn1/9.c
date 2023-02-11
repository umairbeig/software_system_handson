//mt2022126
//umair beig
//9. print file information 

#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<time.h>
int main(){
struct stat a;
int f=open("file1.txt",O_RDONLY,0777);
fstat(f,&a);
printf("inode         %d\n",(int)a.st_ino);
printf("hardlinks     %d\n",a.st_nlink);
printf("no of blocks  %d\n",a.st_blocks);
printf("block size    %d\n",a.st_blksize);
printf("mode          %d\n",a.st_mode);
printf("last change   %s\n",ctime(&a.st_ctime));
printf("last access   %s\n",ctime(&a.st_atime));
printf("last modif    %s\n",ctime(&a.st_mtime));

return 0;

}
