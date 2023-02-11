#include<stdio.h>
#include<unistd.h>
int main(int argc,char * argv[]){

int i=symlink(argv[1],argv[2]   );
printf("status : %d",i);
return 0;
}
