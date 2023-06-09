/*
Q 7. Write a C program which accept string from user and then accept range and reverse the string in that range without taking another string.
		Eg:
			Input String: India is my country
			Input of N1: 3
			Input of N1: 9
			Output String: Indm si aicountry
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,j,x,y,n1,n2;
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
	
	printf("\nEnter n1 =");
	scanf("%d",&n1);
	printf("Enter n2 =");
	scanf("%d",&n2);
	
	n2=n2-n1;
	i=0;
	while(*(ptr+i)==32)
		i++;
	j=i;
	while(n1>0 && *(ptr+i)!='\n')
	{
		if(*(ptr+i)!=32)
		{
			x=i;
			n1--;
		}
		i++;
	}
	
	while(n2>0 && *(ptr+i)!='\n')
	{
		if(*(ptr+i)!=32)
		{
			y=i;
			n2--;
		}
		i++;
	}
	
	printf("Updated String=");
	
	while(j<x)
	{
		printf("%c",*(ptr+j));
		j++;
	}
	
	while(y>=x)
	{
		printf("%c",*(ptr+y));
		y--;
	}
	while(*(ptr+i)!='\0')
	{
		printf("%c",*(ptr+i));
		i++;
	}

	free(ptr);
	getch();
}