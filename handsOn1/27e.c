#include<stdio.h>
#include<unistd.h>
int main(){
char * arr[]={"ls","-l","-R",NULL};
execvp("ls",arr);
return 0;

}
