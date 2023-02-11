//mt2022126
//umair beig
//use execl,execlp,execle,execv,execvp
#include<stdio.h>
#include<unistd.h>
int main(){

execl("/bin/ls","ls","-lR",NULL);
return 0;

}
