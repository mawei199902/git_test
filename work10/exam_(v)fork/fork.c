#include<stdio.h>
#include<unistd.h>

int main(){
  int tmp = 5;
  pid_t res = fork();
  if(res < 0){
  //fork failed
  perror("fork");
  }else if(res == 0){
  //child
  printf("child[%d],father is %d,tmp is %d.\n",getpid(),getppid(),tmp++);
  }else{
  //father
  printf("father[%d],tmp is %d.\n",getpid(),tmp++);
  }
  printf("tmp = %d\n",tmp);
  return 0;
}
