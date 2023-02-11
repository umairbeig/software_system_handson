#include<stdio.h>
#include<unistd.h>
int main()
{
    int fd1[2];
    pipe(fd1);

    if(!fork())
    {
      //ls-l|grep ^d|wc
        close(fd1[0]);
        dup2(fd1[1],1);
        execlp("ls" , "ls" ,"-l",NULL);
    }
    else{
        wait(1);
        int fd2[2];
        pipe(fd2);
        close(fd1[1]);
        dup2(fd1[0],0);
        if(!fork()){
            close(fd2[0]);
            dup2(fd2[1],1);
            execlp("grep","grep","^d",NULL);
        }
        else{
               wait(1);
               close(fd2[1]);
               dup2(fd2[0],0);
               execlp("wc","wc",NULL);
        }
    }
    return 0;
}
