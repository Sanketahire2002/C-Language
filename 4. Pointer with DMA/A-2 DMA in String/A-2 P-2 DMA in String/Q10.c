/*
Q 10. Write a program which accept string from user and copy first N charaters into some destination   string.
		Eg:
			Input String: India is my country
			Input of N: 8
			Output String: India is
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
	while(*(ptr+i)==32)
		i++;
		
	printf("Updated String =");
	while(n>0 && *(ptr+i)!='\0')
	{
		printf("%c",*(ptr+i));
		i++;
		n--;
	}
	free(ptr);
	getch();
}