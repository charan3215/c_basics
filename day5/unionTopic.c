#include<stdio.h>
union myunion{
	int i;
	float f;
};
int main()
{
	union myunion u;
	u.i=65;


	printf("%d\n",u.i);

	u.f=3.17;
	printf("%d\n",u.i);
	printf("%f\n",u.f);


	return 0;
}
