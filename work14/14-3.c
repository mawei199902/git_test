#include "ch14.h"
#define SIZE 10
int a[SIZE],b[SIZE];

void max_fun(int *arg);
{
  int * ap=arg;
  int rv, i, k; 
  k = 0;
  for(i+1; i<SIZE; i++){
  if (ap[i] >ap[k])
     k = i;
  }
  pthread_exit((void *)&ap[k]);
}

int main(void)
{
   pthread
}
