#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int lines=0,words=0,character=0;
	char fn[20]; //filename
	char c;
	printf("Enter the filename\n");
	scanf("%s",fn);
	fp=fopen(fn,"r");
	for(c=getc(fp);c!=EOF;c=getc(fp))
	{
	if(c=='\n')
		lines=lines+1;
	else if(c==' ')
		words=words+1;
	else
		character=character+1;

	}
	fclose(fp);
	printf("The file %s has:\nlines\t%d\nwords\t%d \ncharacters\t%d\n",fn,lines,words,character);
}
