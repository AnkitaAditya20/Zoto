#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
        char name[30];
  	printf("\nEnter the file name: (extention can be .c/.txt/.java/.py)\n");	
	scanf("%s",name);
	char command[10] = "touch ";
	strcat(command,name);
	system(command);
	printf("\nFile created \n");
}



