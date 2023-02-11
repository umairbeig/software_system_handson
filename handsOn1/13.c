//mt2022126
//umair beig
//13.wait for stdin for 10 secs..verfify whether ip is available or not

#include<stdio.h>
#include<stdlib.h>
#include<sys/select.h>
int main(){
fd_set u;
FD_ZERO(&u);
FD_SET(0,&u);
struct timeval a;
a.tv_sec=10;
a.tv_usec=0;
int success=select(1,&u,NULL,NULL,&a);
if(success==-1){

printf("error\n");


}
else if(success){
printf("input entered");

}
else{
printf("input not entered\n");
}
exit(EXIT_SUCCESS);







return 0;
}
