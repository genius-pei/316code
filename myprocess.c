#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
  while(1)
  {
    printf("I am a process,pid : %d\n ppid : %d\n",getpid(),getppid());
    sleep(1);
  }
  return 0;
}
