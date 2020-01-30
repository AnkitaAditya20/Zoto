#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int ch;
	system("cat about.txt");
	printf("\npress 0 to continue to menu\n");
	scanf("%d",&ch);
	if(ch==0)
	{
		system("gcc zoto.c");
		system("./a.out");
	}
}
