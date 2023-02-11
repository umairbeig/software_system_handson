#include<stdio.h>
#include<fcntl.h>

int main(){

 mknod("fifo_mknod",S_IFIFO|S_IRWXO|S_IRWXG|S_IRWXU,0);
 perror("fifo created:");


}
