#include<stdio.h>
#define PI 3.14159

#define CONCAT(X,Y) X##Y
 int main()
{
	printf("%f ",PI);

	printf("%d\n",CONCAT(3,5));

	

}
