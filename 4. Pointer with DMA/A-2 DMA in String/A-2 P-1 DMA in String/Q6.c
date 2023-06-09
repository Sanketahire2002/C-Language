/*
Q 6.Write a C program to reverse a given string as below.
	Eg:
		Input String: India is my country
		Output String: aidnI si ym yrtnuoc
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
		j=0;
		while(*(ptr+i)!=32 && *(ptr+i)!='\0')
		{
			j++;
			i++;
		}
		temp=i-1;
		while(j>0)
		{
			printf("%c",*(ptr+temp));
			temp--;
			j--;
		}
		
		while(*(ptr+i)==32)
			i++;
		
		if(*(ptr+i)!='\0')			
			printf(" ");
	}
	free(ptr);
	getch();
}