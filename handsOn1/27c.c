#include<stdio.h>
#include<unistd.h>
int main(){
char *c[]={"HOME=/home/umair",NULL};
execle("ls","ls","-l","-R",NULL,c);
return 0;

}
