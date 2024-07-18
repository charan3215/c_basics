#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[20];
	float percent;
};
int main()
{
	struct student s;
	struct student *p;
	p=&s;

	p->rollno=101;
	strcpy(p->name,"charan");
	p->percent=71;

	printf("%d\n",p->rollno);
	printf("%s\n",p->name);
	printf("%f\n",p->percent);
}
