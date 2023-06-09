/*
Q 6. Write a C program which accept string from user and then reverse the string till first N characters without taking another string.
		Eg:
			Input String: India is my country
			Input of N: 8
			Output : m si aidnIy country
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,j,k,l,n;
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
	
	printf("\nEnter n =");
	scanf("%d",&n);
	
	printf("Updated String=");
	i=0;
	while(*(ptr+i)==32)
		i++;
	k=i;
	j=0;
	l=0;
	while(l<n && *(ptr+i)!='\0')
	{	
		if(*(ptr+i)!=32)
		{
			j=i;
			l++;
		}
		i++;
	}
	while(j>=k)
	{
		printf("%c",*(ptr+j));
		j--;
	}
	while(*(ptr+i)!='\0')
	{
		printf("%c",*(ptr+i));
		i++;
	}	

	free(ptr);
	getch();
}