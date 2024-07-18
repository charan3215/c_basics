#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	float b[]={1.1,2.2,3.3,4.4,5.5};
	int *pi=a;
	float *pb=b;

	printf("Integer Array :\n");
	for(int i=0;i<5;i++)
	{
		printf("Element %d : Address = %p,value=%d\n",i,pi,*pi);
		pi++;
	}
	printf("\nFloat Array :\n");
	for(int i=0;i<5;i++)
	{
		printf("element %d : Adress=%p ,value=%.1f\n",i,(void*)pb,*pb);
		pb++;
	}
	return 0;
}
