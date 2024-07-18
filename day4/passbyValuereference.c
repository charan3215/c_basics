#include<stdio.h>
void modifyvalue(int x)
{
	x=x*2;
	printf("Inside function: %d\n",x);
}
int main()
{
	int num=5;
	modifyvalue(&num);
	printf("outside function :%d\n",num);
	return 0;
}
