/*
Q 11. Write a C program which accept string from user and accept number N then copy last N character into some another string.
	Eg:
		Input String: India is my country
		Input of N: 5
		Output String: untry
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,n,size;
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
	
	printf("\nEnter number upto which you want to print String = ");
	scanf("%d",&n);
	
	i=0;
	while(*(ptr+i)!='\0')
		i++;
	
	i=i-n;
	if(i<0)
		i=0;
	printf("Last String =");
	while(*(ptr+i)!='\0')
	{
		printf("%c",*(ptr+i));
		i++;
	}
	
	free(ptr);
	getch();
}