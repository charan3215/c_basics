#include<stdio.h>
int smartcounter()
{
	static int count=0;
	count++;
	return count;
}
int main(){
	printf("count :%d\n",smartcounter());
	printf("count :%d\n",smartcounter());
	printf("count :%d\n",smartcounter());
	printf("count :%d\n",smartcounter());
	
	return 0;
}
