/*
Q 9. Write a C program which accept string from user and check whether string is palindrome or not.
		Eg:
			Input String: level
			Output String: String is palindrome.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,j,flag;
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
	
	i=0;
	while(*(ptr+i)!='\0')
		i++;
	
	j=i-1;
	i=0;
	flag=0;
	while(i<j)
	{
		if(*(ptr+i)!=*(ptr+j))
		{
			flag=1;
			break;
		}
		i++;
		j--;
	}
	if(flag==0)
		printf("\nString is Pallindrome.");
	else
		printf("\nString is NOT Pallindrome.");

	free(ptr);
	getch();
}