#include<stdio.h>

int counter()
{
	static int a=0;
	a++;

	return a;
}
int main()
{
	printf("%d\n",counter());
	printf("%d\n",counter());
	return 0;
	
}

