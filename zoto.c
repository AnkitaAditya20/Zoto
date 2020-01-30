#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void new();
void open();
void help();
void about();
void search();
void wc();
void execute();

void main()
{
	int ch =0;
	while(1) {
		printf("\n\t\t***ZOTO***\n");
		printf("\tWelcome to the world of editing...\n");
		printf("\nWhat you want to do?\n");
		printf("\n1.New\n2.Open\n3.Help\n4.About Us\n5.Search\n6.Word Count \n7.Execute\n8.Exit\n\n");
		scanf("%d",&ch);
		switch(ch) {
			case 1: new();
				break;
			case 2: open();
				break;
			case 3: help();
				break;
			case 4: about();
				break;
			case 5: search();
				break;
			case 6: wc();
				break;
			case 7: execute();
				break;
		        case 8: exit(0);
				break;
			
		       default: printf("\nInvalid input");
					 
			}
		  }
}

void new()
{
	system("gcc new.c");
	system("./a.out");
}

void open()
{ 
	system("gcc open.c");
	system("./a.out");
}

void help()
{	
	system("gcc help.c");
	system("./a.out");
}


void about()
{	
	system("gcc about.c");
	system("./a.out");
}
void search()
{	
	system("gcc search.c");
	system("./a.out");
}
void wc()
{
        system("gcc wc.c");
        system("./a.out");
}
void execute()
{
        system("gcc execute.c");
        system("./a.out");
}

