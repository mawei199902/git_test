#include "mylib.h"
#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int main()
{
	int a[NUM];
	void *handle; 
	void(*f1)(),(*f2)();
	int (*f3)(),(*f4)();
	char* error;

	handle = dlopen("/home/rlk/homework/work6/code/dynamiclib/libdynamic.so",RTLD_LAZY);
	if(!handle)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
}
	f1 = dlsym(handle,"init");
	if((error = dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
} 
	f2 = dlsym(handle,"show");
	if((error = dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
} 
	f3 = dlsym(handle,"max");
	if((error = dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
} 
	f4 = dlsym(handle,"sum");
	if((error = dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
} 
    f1(a,NUM);
	f2(a,NUM);
	printf("max=%d\n",f3(a,NUM));
	printf("sum=%d\n",f4(a,NUM));
	if(dlclose(handle)<0)
	{
	fprintf(stderr,"%s\n",dlerror());
	exit(1);
}
	return 0;
}
