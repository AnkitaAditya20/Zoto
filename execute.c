#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int ch;
	char name[30],ext[10];
	printf("\nEnter the file name (without extension) : ");
	scanf("%s",name);
	printf("Enter the extension with dot(.) operator: ");
	scanf("%s",ext);
	if(strcmp(ext,"c"))
	{
		char command[10] = "gcc ";
		strcat(command,name);
		strcat(command,ext);
		system(command);
		system("./a.out");
	}
	printf("\n");
	if(strcmp(ext,"py"))
        {
                char command[10] = "python ";
		strcat(command,name);
		strcat(command,ext);
		system(command);
	}
}
