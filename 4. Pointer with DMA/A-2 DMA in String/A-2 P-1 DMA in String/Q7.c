/*
Q 7.Write a C program to replace space with ‘$’ in given string.
	Eg:
		Input String: India is my country
		Output String: India$is$my$coutry
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,size,j,temp,count;
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
	while(*(ptr+i)==32)
		i++;
	while(*(ptr+i)!='\0')
	{
		while(*(ptr+i)!=' ' && *(ptr+i)!='\0')
		{
			printf("%c",*(ptr+i));
			i++;
		}
		
		while(*(ptr+i)==' ')
			i++;
		
		if(*(ptr+i)!='\0')
			printf("$");
	}
	free(ptr);
	getch();
}