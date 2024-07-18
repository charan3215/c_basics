#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[20];
	float percent;
};
int main()
{
	struct student ss;

//	ss.rollno=101;	
//	strcpy(ss.name,"charan");
//	ss.percent=71;
	scanf("\n%d",&ss.rollno);
	scanf("\n%s",ss.name);
	scanf("\n%f",&ss.percent);

	printf("roll no is :%d\n",ss.rollno);
	printf("name of student is :%s\n",ss.name);
	printf("percentage of student is :%f\n",ss.percent);
}
