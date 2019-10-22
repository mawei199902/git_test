#include "lib.h"
int main()
{
	int a[NUM];
	int i;
	urand(a,NUM);
	for(i=0;i<NUM;i++)
	{
		printf("a[%d]=%d<n",l,a[i]);
}
	printf("max=%d<n",max(a,NUM));
	printf("sum=%d<n",sum(a,NUM));
	return 0;
}
