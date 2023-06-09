/*
Q 6. Write a C program to convert the string from upper case to lower case.
	Eg:
		Input String: India Is My Country
		Output String: india is my country
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i;
	int size;
    char* ptr=NULL;
	char ch;
	
	size=1;
	ptr=(char*)malloc(size*sizeof(char));
	*ptr='\0';
	printf("Enter String =");
	i=0;
	do
	{	
		scanf("%c",&ch);
		if(ch!='\n')
		{
			ptr=(char*)realloc(ptr,(size++)*sizeof(char));
			*(ptr+i)=ch;
			*(ptr+(i+1))='\0';
			i++;		
		}
	}while(ch!='\n');
	printf("String =%s",ptr);
	
	printf("\nUpdated String =");
	i=0;
	while(*(ptr+i)!='\0')
	{
		while(*(ptr+i)>=65 && *(ptr+i)<=90)
		{
			printf("%c",*(ptr+i)+32);			// a - A = 32  so we give difference of 32
			i++;
		}
		if(*(ptr+i)=='\0')
			break;
		printf("%c",*(ptr+i));
		i++;
	}
	
	free(ptr);
	getch();
}