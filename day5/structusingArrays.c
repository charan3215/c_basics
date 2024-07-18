#include<stdio.h>
#include<string.h>
struct Person
{
	int number;
	char name[20];
	int age;
};
int main()
{
	struct Person persons[5] ;

	for(int i=0;i<5;i++)
	{
		printf("Enter number");
		scanf("%d\n",&persons[i].number);
		getchar();

		printf("Enter person name");
		fgets(persons[i].name, 20, stdin);
		persons[i].name[strcspn(persons[i].name, "\n")] = '\0';

		printf("Enter age");
		scanf("%d\n",&persons[i].age);
		getchar();
	
	
	}
	for(int i=0;i<5;i++)
	{
		printf("The number is :%d\n",persons[i].number);
		printf("The person name is :%s\n",persons[i].name);
		printf("The age of person is :%d\n",persons[i].age);
	}
}
