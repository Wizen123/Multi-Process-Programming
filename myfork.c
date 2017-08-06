#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

void main()
{
    pid_t pid;

    pid=fork();

    if (pid>0)
    {
        wait(NULL);
        printf("This is father process.\n");
        exit(0);
    }
    else
    {
        execl("/bin/ls","ls","/usr",NULL);
        printf("This is child process.\n");
        exit(0);
    }
 
}
