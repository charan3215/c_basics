#include<stdio.h>
#include<stdlib.h>

#include<dlfcn.h>

typedef int (*fp) (int, int);

int main()
{
	void *handle;
	fp f;

	handle=dlopen("./plugin.so",RTLD_LAZY);

	if(!handle)
	{
		fprintf(stderr,"Error loading plugin: %s\n",dlerror());
		exit(EXIT_FAILURE);
	}

	f= (fp)dlsym(handle, "plugin_function");

	if(!f)
	{
		fprintf(stderr,"Errorrrrrr resolving symbol: %s\n",dlerror());

		dlclose(handle);
		exit(EXIT_FAILURE);
	}

	int result =(f)(5,3);

	printf("Result: %d\n",result);


	dlclose(handle);

	return 0;
}
