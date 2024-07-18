#include<stdio.h>
int main()
{
	FILE *fp;
	char buffer[100];
	fp=fopen("example.txt","r");
	if(fp==NULL)
	{
		printf("Error opening file:\n");
		return 1;
	}
	fgets(buffer,sizeof(buffer),fp);
	fclose(fp);

	return 0;
}

