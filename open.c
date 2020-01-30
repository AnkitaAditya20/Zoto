#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main() {
	char name[6];
  	printf("\nEnter the file name: ");	
	scanf("%s",name);
	char command[10] = "gedit ";
	strcat(command,name);
	system(command);
}
