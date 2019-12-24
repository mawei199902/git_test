#include "my.h"
int main(){
int pid1,pid2,s;

if((pid=fork())<0)
{
perror("failes to forks!\n");
return -1;
}
else if(pid2==0)
{

printf("%d: child is running!\n",gitpid());
while(1);
printf("%d: child is exit now!\n",gitpid());
//while(1)
exit(120);
}
else
{

while((pid=wait(&s))!=1)
printf("%d: child is exit now!\n",gitpid());
if(WIFEXITED(s)){
printf(" child is exit normally.exit code=%d\n",pid,WEXITSTAUS(s));}
else if(WIFSIGNALED(s)){
printf("child %d exit by signl.signl no =%d \n",pid,WTERMAIG(s));}
else{print("not known !\n");}

}
exit(0);

}
