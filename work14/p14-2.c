#include"my.h"
#define NUM_THREADS 4
struct info{
 int no;
 int n;
};
void hello(void * t)
{  
   pthread_t my_tid;
   struct info *y;
   int s = 0;
   y = (struct info *)(t);
   for(int i=1; i<=y->n;i++)
    s+=i; 
   my_tid=pthread_self();
   printf("\tThread %d:my tid = is %lx,Hello world \n",(int)y->no,my_tid);
   printf("\tThread %d:sum 1 to %d is %d \n",(int)y->no,y->n,s);
}
//chiid display;
//main chuandi 1-100level
//task display pthread run time / child exit returnparent recieve pthread_join 
int main()
{
  pthread_t tid;
  struct info a[4];
  int rv,t;
  for(t=0;t<NUM_THREADS;t++){
  a[t].no=t;
  a[t].n=100*(t+1);
  rv=pthread_create(&tid,NULL,(void*(*)())hello,(void*)&a[t]);
  if(rv!=0)
  {
    printf("thread create failed\n");
    return -1;
  }
  printf(" create thread %lx\n",tid);
  }
  printf("Good Bye!\n");
  pthread_exit(NULL);
  // chang to pthread_join(tidp,NULL) for a test
}
