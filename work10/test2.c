#include "my.h"
int main(){
int pid;
if((pid=fork())<0)
{
perror("failes to forks!\n");
return -1;
}
else if(pid==0)
{

printf("%d: child is running!\n",gitpid());
getchar();
//while(1);
printf("%d: child is exit now!\n",gitpid());
exit(0);
//exit(120);
}
else
{

printf("%d: child is waiting zombie now!\n",gitpid());
wait(1);
//while((pid=wait(&s))!=1)
printf("%d: child is exit now!\n",gitpid());
//if(WIFEXITED(s)){
//printf(" child is exit normally.exitcode=%d!\n",pid,WEXITSTAUS(s));}
//else if(WIFSIGNALED(s)){
//printf("child %d exit by signl.signl no =%d \n",pid,WTERMAIG(s));}
//else{print("not known exit\n");}

}
exit(0);

}
// ps -aux|grep test1
