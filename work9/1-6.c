#include"my.h"

int g=10;
int main(){
int  s=20;
static int k=30;
pid_t pid;
pid=fork();
if(pid<0)
{
perror( "fork failed!\n" );

return -1;
}
else if (pid == 0)
{
printf("child pid=%d : \n&g=%16p\n&s=%16p&k=%16p\n",getpid(),&g,&s,&k);
g=100;
s=200;
k=300;     
//sleep(2)
printf("child after g=%d,s=%d,k=%d\n",g,s,k);
_exit(0); //return 0;
}
else 
{
printf("parent pid=%d : \n&g=%16\n&k=%16p&s=%16p\n",getpid(),&g,&k,&s);
printf("parent after g=%d,k=%d,s=%d\n",g,s,k);
return 0;
}

}
// _exit() return()
// add sleep(2) make child first work;
// 

