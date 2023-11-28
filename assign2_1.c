//. From one parent create 5 child processes. Each child should run for 5 seconds and print count along with its pid. Parent should wait for all child processes
//to complete and clean all of them. Hint: use loop to fork() multiple child processes.
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
int i,pid,pid1,pid2,pid3,pid4,pid5,s1,s2,s3,s4,s5;
//int i=1,pid;
    pid=0;
 //pid1=fork();
  pid1=fork();

 if(pid1 == 0)
 {
    //pid=pid+i;
    do
    {
        pid=pid+i;
       // pid=fork();

        printf("dac:%d\n",i);
        sleep(1);
        pid++;
        i++;
    }while(i<5);
    _exit(0);
 }

for(int i=1;i<5;i++)
{
   printf("ditiss:%d\n",i);
   sleep(1);
  // child();

}
waitpid(pid1,&s1,0);
waitpid(pid2,&s2,0);
waitpid(pid3,&s3,0);
waitpid(pid4,&s4,0);
waitpid(pid5,&s5,0);

}
/*
void child(int pid1,int pid2,)
{
    int i=1,pid;
 pid=fork();
 if(pid+i == 0)
 {
    
    do
    {
        {
        printf("dac:%d\n",i);
        sleep(1);
        pid++;
        }
    }while(i<=5);
    _exit(0);
 }

}
*/