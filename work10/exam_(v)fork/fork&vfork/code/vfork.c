#include"my.h"
int main(){
  char a[4];
  int fd  ;
  
  memset(a,0,sizeof(a));
   const char* filename = "a.txt";
  if((fd=open(filename,O_RDONLY)) < 0){
  printf(" failed!\n");
  }
  //fork failed
pid_t res = vfork();
  if(res<0)
 {
  perror("vfork failed!\n");
  exit(-1);
  }else if(res == 0){
  //child
 int i = 6;
while(i-->0){
  if(read(fd,a,2)>0)
 { 
  printf("child[%d],father is %d,a is %s.\n",getpid(),getppid(),a);
  sleep(1);
  }
  }
  memset(a,0,sizeof(a));
  sleep(1);
  _exit(0);
  }else{ 
  int i=6;
 while(i-->0){
  if(read(fd,a,2)>0)
 { 
  printf("parent[%d],father is %d,a is %s.\n",getpid(),getppid(),a);
  sleep(1);
  }
  }
  memset(a,0,sizeof(a));
 return 0;
  //father
}

}
