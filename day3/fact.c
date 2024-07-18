#include<stdio.h>
int factorial(int a);
void fibonacciSeries(int s);
int main()
{
	int num,val;
	scanf("%d",&num);
	int b=factorial(num);
	printf("The factorail of num are %d\n",b);
	fibonacciSeries(num);
}
int factorial(int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	{
		return a*factorial(a-1);
	}
}
void fibonacciSeries(int s)
{
	int x=0;
	int y=1,f;
	printf("The fibonacci series are ....\n");
	for(int i=1;i<=s;i++)
	{
		f=x+y;
		x=y;
		y=f;
		printf("%d\n",f);
	}
}
