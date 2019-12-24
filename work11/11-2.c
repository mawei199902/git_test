/*#include "my.h"
int count = 0;
int main(){


pid_t p1,p2,p3;
p1=fork();
p2=fork();
p3=fork();
if(p1<0||p2<0||p3<0)
{
perror("failed");
return -1;
}
else if(p1==0)
{count +=1;
printf("child pid=%d,ppid=%d,count=%d \n",getpid(),getppid(),count);
exit(0);
}
else if(p2==0)
{count +=1;
printf("child pid=%d,ppid=%d,count=%d \n",getpid(),getppid(),count);
exit(0);
}
else if(p1==0)
{count +=1;
printf("child pid=%d,ppid=%d,count=%d \n",getpid(),getppid(),count);
exit(0);
}
else if(p2==0)
{count +=1;
printf("child pid=%d,ppid=%d,count=%d \n",getpid(),getppid(),count);
return 0;
}
}*/


#include "my.h"
int count = 0;
int main(){

pid_t p1,p2,p3;
p1=fork();
int s1,s2,s3,r1,r2,r3;
if(p1<0)
{
perror("fork1 failed");
return -1;
}
else if(p1==0)
{
count +=1;
printf("child pid=%d,ppid=%d,count=%d \n",getpid(),getppid(),count);
exit(99);
}
else{
printf("parent second time\n");
p2=fork();

 if(p2<0){
perror("fork2 failed");
return -1;
}
else if(p2==0)
{count +=1;
printf("child pid=%d,ppid=%d,count=%d \n",getpid(),getppid(),count);
exit(34);
}
else 
{
printf("parent third time\n");
p3=fork();

if(p3<0)
{
perror("fork3 failed");
return -1;
}
else if(p3==0)
{
count +=1;
printf("child pid=%d,ppid=%d,count=%d \n",getpid(),getppid(),count);
exit(77);
}
else
{
print("parent waiting\n");
r1=wait(&s1);
r2=wait(&s2);
r3=wait(&s3);
printf("r1=%d,s1=%d,r2=%d,s2=%d,r3=%d,s3=%d",r1,WEXITSTATUS(s1),r2,WEXITSTATUS(s2),r3,WEXITSTATUS(s3));

printf("parent pid=%d,ppid=%d,count=%d \n",getpid(),count);
return 0;
}
}
}
}
