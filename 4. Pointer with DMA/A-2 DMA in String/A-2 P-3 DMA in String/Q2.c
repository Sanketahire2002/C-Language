/*
Q 2. Write a C program which accept two strings from user and append N characters of second string
	after first string. 
		Eg:
			Input String: India Country
			Input of N: 4
			Output String: IndiaCoun
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,j,n;
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

	size=1;
	q=(char*)malloc(size*sizeof(char));
	*q='\0';
	printf("Enter String 2 =");
	i=0;
	do
	{	
		scanf("%c",&ch);
		if(ch!='\n')
		{
			q=(char*)realloc(q,(size++)*sizeof(char));
			*(q+i)=ch;
			*(q+(i+1))='\0';
			i++;		
		}
	}while(ch!='\n');

	printf("String 1 =%s",ptr);
	printf("\nString 2 =%s",q);
	
	printf("\nEnter n=");
	scanf("%d",&n);

	i=0;
	while(*(ptr+i)!='\0')
		i++;

	j=0;
	while(j<n && *(q+j)!='\0')
	{
		ptr=(char*)realloc(ptr,(size++)*sizeof(char));
		*(ptr+i)=*(q+j);
		j++;
		i++;
	}
	*(ptr+i)='\0';
	printf("Updated String =%s",ptr);

	free(ptr);
	free(q);
	getch();
}