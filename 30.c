//Name: SK.Tanzir Mehedi
//ID:IT-14012

#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int value = 5;
int main()
{
    pid_t pid;
    pid = fork();
    if (pid == 0)   //child process
    {
        value += 15;
        return 0;
    }
    else if (pid > 0)  //parent process
    {
        wait(NULL);
        printf("IT-14012 Experiment No: 01 Output value = %d",value); // LINE A
        return 0;
    }
}
