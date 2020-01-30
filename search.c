#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char file[20],a[20],ch;
	char temp[20]="gedit ";
	int flag=0; 
	printf("File name : ");
	scanf("%s",file);
	system("ls >new.txt");
	FILE *fp = fopen("new.txt","r");
        while(!feof(fp))//this loop searches the for the current word
        {
    		fscanf(fp,"%s",a);
		if(strcmp(a,file)==0)
		{ 			
			
			flag=1;
			strcat(temp,file);
			system(temp);
			printf("File Exists...!\n");
			break;
		}	
	}
	if(flag==0)
	{
		printf("\nCreating file...");	
		char command[10] = "gedit ";
		strcat(command,file);
		system(command);
	}
exit(0);
fclose(fp);
}

