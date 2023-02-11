#include<stdio.h>

int main(){


mkfifo("fifo_mkfifo",0744);
perror("fifo created:");

}
