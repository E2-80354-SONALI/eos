#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
    //int pid[5],s[5];
    int pid1,pid2,pid3,pid4,pid5,s1,s2,s3,s4,s5;
    int pid;
    int j=1;
        do
        {
         pid=pid+j;
         pid1=fork();
      if(pid1==0)
      {
        for(int i=1;i<=5;i++)
      {
        printf("ditiss: %d\n", i);
        sleep(1);
      }
      _exit(0);
      }
      pid2=fork();
      if(pid2==0)
      {
        for(int i=1;i<=5;i++)
      {
        printf("ditiss: %d\n", i);
        sleep(1);
      }
      _exit(0);
      }
      pid3=fork();
      if(pid3==0)
      {
        for(int i=1;i<=5;i++)
      {
        printf("dac: %d\n", i);
        sleep(1);
      }
      _exit(0);
      }
      pid4=fork();
      if(pid4==0)
      {
        for(int i=1;i<=5;i++)
      {
        printf("dmc: %d\n", i);
        sleep(1);
      }
      _exit(0);
      }
      pid5=fork();
      if(pid5==0)
      {
        for(int i=1;i<=5;i++)
       {
        printf("desd: %d\n", i);
        sleep(1);
       }
     _exit(0);
      }
        j++;
       }while(j<=5);
        


    for(int i=1; i<=5; i++) {
    printf("sunbeam: %d\n", i);
    sleep(1);
    }

    waitpid(pid1, &s1, 0);
    waitpid(pid2, &s2, 0);
    waitpid(pid3, &s3, 0);
    waitpid(pid4, &s4, 0);
    waitpid(pid5, &s5, 0);



    return 0;
    }
