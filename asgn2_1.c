#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
int pid[5];
//int s1,s2,s3,s4,s5;
//int i=1;
//pid[i];
int s[10];
//int ret = fork();
for(int i=0;i<5;i++)
{
   pid[i]=fork();
   if(pid[i] == 0)
   {
      for(int j=1;j<=5;j++)
	  {
      printf("child=%d\n",j);
      sleep(1);
   }
   
    _exit(0);
   }
   }
//_exit(0);

   for(int i=1;i<5;i++)
   {
	printf("parent=%d",i);
	sleep(1);
  }
   for(int i=0;i<5;i++)
   {
   waitpid(pid[i],&s[i],0);
   }
//waitpid(pid[2],&s2,0);
//waitpid(pid[3],&s3,0);
//waitpid(pid[4],&s4,0);
//waitpid(pid[5],&s4,0);
   }
//return 0;

