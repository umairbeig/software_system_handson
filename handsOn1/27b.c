#include<stdio.h>
#include<unistd.h>
int main(){

execlp("ls","ls","-l","-R",NULL);
return 0;

}

