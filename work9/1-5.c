#include "my.h"
static void callback1(){
 printf("\n----------callback1--------\n");
}
static void callback2(){
 printf("\n----------callback2--------\n");
}
static void _attribute_((constructor)) before_main()
{
 printf("\n----------constructor--------\n");
}
static void _attribute_((desstructor)) before_main()
{
 printf("\n----------desstructor--------\n");
}
int main(){
 atexit(callback1);
 atexit(callback2);
FILE *fp;
char buf[]={"test date!"}
if((fp=fopen("test.dat","w+"))==NULL)
{
   perror("failed to fputs!\n");

return -1;

}
printf("printf:data from line buffer");
exit();
//_exit;
//return 0;

]
