#include "my.h"
void foo()
{
  int buffer[256]={0};
  i=i+1;
  printf("i=%d\n",i);
  foo();
}
int main()
{
 foo();
 return 0;
}
