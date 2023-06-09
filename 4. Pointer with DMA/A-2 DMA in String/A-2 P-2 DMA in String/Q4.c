/*
Q 4. Write a C program which accept sentence from user and print last word from that sentence.
	Eg:
		Input String: India is my country
		Output String: country
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,start,size;
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
	
	printf("\nLast Word =");
	i=0;
	while(*(ptr+i)!='\0')
	{
		while(*(ptr+i)==32)
			i++;
		
		if(*(ptr+i)=='\0')
			break;
		
		start=i;
		
		while(*(ptr+i)!=32 && *(ptr+i)!='\0')
			i++;
	}
	
	while(*(ptr+start)!='\0' && *(ptr+start)!=' ')
	{
		printf("%c",*(ptr+start));
		start++;
	}
	
	free(ptr);
	getch();
}