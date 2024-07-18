#include<stdio.h>
#include<string.h>

struct student{
	int rollno;
	char name[20];

};
void printStudent(struct student s)
{
	printf("Roll number: %d\n",s.rollno);
	printf("Name : %s\n",s.name);
}

void inputStudent(struct student *ps)
{
	printf("Enter roll no")",ps->name);
}

int main()
{
	struct student s;
	struct student *p;
	p=&s;
	inputStudent(&s);
	printStudent(s);
}



