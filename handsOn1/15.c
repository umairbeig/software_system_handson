//mt2022126
//umair beig
//15. display all env variables
#include<stdio.h>
#include<stdlib.h>

int main(){

extern char **environ;
char **s=environ;
for(;*s;s++){

printf("%s \n  : ",*s);

}
getchar();

}
