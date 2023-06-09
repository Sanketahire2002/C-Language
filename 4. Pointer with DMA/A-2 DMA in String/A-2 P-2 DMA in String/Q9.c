/*
Q 9. Write a C program which accept string from user and copy that string into some another string.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i;
	int size;
    char* ptr=NULL;
	char* q=NULL;
	char ch;
	
	size=1;
	ptr=(char*)malloc(size*sizeof(char));
	*ptr='\0';
	printf("Enter String 1 =");
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
	
	q=(char*)malloc(size*sizeof(char));
	i=0;
	while(*(ptr+i)!='\0')
	{
		*(q+i)=*(ptr+i);
		i++;
	}
	*(q+i)='\0';
	printf("\nCopied String =%s",q);
	
	free(ptr);
	free(q);
	getch();
}