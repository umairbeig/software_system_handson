#include<stdio.h>
#include<unistd.h>
int main(){
char * arg[]={"ls","-l","-R",NULL};
execv("/bin/ls",arg);
return 0;

}
