#include<stdio.h>
int main()
{
	FILE *file;
	int i;
	file=fopen("numbers.txt","w");
	if(file==NULL)
	{
		printf("Error opening file\n");
		return 1;
	}

	for(int i=1;i<=10;i++)
	{
		fprintf(file,"%d\n",i);
	}
	fclose(file);

	printf("Numbers from 1 to 10 have been writeen in numbers.txt\n");
	return 0;
}
