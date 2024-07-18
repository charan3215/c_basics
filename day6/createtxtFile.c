#include<stdio.h>

int main()
{
	FILE *p;

	p=fopen("example.txt","w");
	if(p==NULL)
	{
		printf("Error openine file.\n");
		return 1;
	}
	fclose(p);
	return 0;
}

