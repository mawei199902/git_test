#include <stdio.h>

int main(int argc,char *argv[])
{
	//setvbuf(stdout,NULL,_IONBF,0);
	printf("hello");
	//fflush(stdout); 
	fclose(stdout);
	/*for(int i=0;i<1020;i++)
	{
		putchar('\0');
}*/
	while(1);
}
