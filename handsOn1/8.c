//mt2022126
//umair beig
//8.open file in rdonly.read line by line.close

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
char c;
int f=open("file8.txt",O_RDONLY);
while(read(f,&c,1)){

if(c=='\n'){
getchar();

}
else
{
printf("%c",c);
}

}
close(f);

return 0;}
