#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
 
void foo()
{
 fprintf(stderr, "foo says bye.\n");
}
void bar()
{
fprintf(stderr, "bar says bye.\n");
}
int main(int argc char *argv[])
{
 atexit(foo);
 atexit(bar);
 fprintf(stout, "Oops~~~~~~~~~forgot a newline");
sleep(2);
if(argc>1&&strcmp(argv[1],"exit")==0)
exit(0);
if(argc>1&&strcmp(argv[1],"_exit")==0)
exit(0);
return 0;
}
