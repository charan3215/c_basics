#include<stdio.h>
int main()
{
	FILE *file;
	FILE *file2;
	int num;
	float f;
	char str[100];
	file=fopen("abc.txt","w");
	file2=fopen("abc1","w");

	fscanf(file,"%d",&num);
	fscanf(file,"%f",&f);
	fscanf(file,"%s",str);

	fprintf(file2,"%s",str);
	fprintf(file2,"%f",f);

	fclose(file);
	fclose(file2);
}

