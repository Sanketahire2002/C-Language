/*
Q 1. Write a C program which accept sentence from user and print number of small letters, capital
	letters, Spaces and digits from that sentence. 
	Eg:
		Input String: abcDE 5Glm1 O
		Output String: Small: 5 Capital: 4 Digits: 2 Spaces: 2
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,sm,cap,dig,sp,size;
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
	
	sm=0;
	cap=0;
	dig=0;
	sp=0;
	
	i=0;
	while(*(ptr+i)!='\0')
	{
		if(*(ptr+i)>=97 && *(ptr+i)<=122)
			sm++;
		if(*(ptr+i)>=65 && *(ptr+i)<=90)
			cap++;
		if(*(ptr+i)==32)
			sp++;
		if(*(ptr+i)>=48 && *(ptr+i)<=57)
			dig++;
		i++;
	}
	printf("\nSmall : %d  Capital : %d  Digits : %d  Spaces : %d",sm,cap,dig,sp);
	free(ptr);
	getch();
}