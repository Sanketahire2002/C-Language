/*
Q 2. Write a C program which accept sentence from user and print number of white spaces from that
	sentence. 
	Eg:
		Input String: India is my country
		Output: 3
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,wsp,size;
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
	
	wsp=0;
	i=0;
	while(*(ptr+i)==32)
		i++;
	
	while(*(ptr+i)!='\0')
	{
		while(*(ptr+i)!=32 && *(ptr+i)!='\0')
			i++;
		
		while(*(ptr+i)==32)
			i++;
		
		if(*(ptr+i)!='\0')
			wsp++;
	}
	printf("\nWhite Spaces : %d",wsp);
	free(ptr);
	getch();
}