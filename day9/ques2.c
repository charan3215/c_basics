#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_QUES_LENGTH 100
#define MAX_FILENAME_LENGTH 50
#define MAX_QUESTIONS 10

int countLines(FILE *file)
{
	int count =0;
	char ch;
	while((ch = fgetc(file)) != EOF)
	{
		if(ch == '\n')
		{
			count++;
		}
	}
	rewind(file);
	return count;
}

int main(int argc, char *argv[]){
	if(argc != 3)
	{
		fprintf(stderr,"Usage: %s <question> <filename>\n",argv[0]);
		return 1;
	}

	char *question = argv[1];
	char *filename = argv[2];

	if(strlen(filename) > MAX_QUES_LENGTH){
		fprintf(stderr,"Error:Question length exceeds %d characters.\n",MAX_QUES_LENGTH);
		return 1;
	}
	if(strlen(filename) > MAX_FILENAME_LENGTH)
	{
		fprintf(stderr,"Error:Filename length exceeds %d characters.\n",MAX_FILENAME_LENGTH);
		return 1;
	}

	FILE *file =fopen(filename,"a+");

	if(file == NULL){
		perror("Error opening file");
		return 1;
	}

	int quesCount = countLines(file);
	if(quesCount >= MAX_QUESTIONS)
	{
		fprintf(stderr,"Error: File \' %s\'  already contains %d questions.Cannot add more. \n",filename,MAX_QUESTIONS);
		fclose(file);
		return 1;
	}

	fprintf(file,"%s\n",question);
	fclose(file);

	printf("Question successfully saved to  \'%s\' .\n",filename);
	return 0;

}
