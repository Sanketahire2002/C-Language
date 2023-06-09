/*
Q 10. Write a C program to count number of alphabates, spaces and words in given string.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,alph,spa,word;
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
	
	alph=0;
	spa=0;
	word=0;
	i=0;
	while(*(ptr+i)!='\0')
	{
		if(*(ptr+i)==32)
			spa++;
		if( (*(ptr+i)>=65&&*(ptr+i)<=90) || (*(ptr+i)>=97&&*(ptr+i)<=122) )
			alph++;
		i++;
	}
	
	i=0;
	while(*(ptr+i)!='\0')
	{
		while(*(ptr+i)==32)
			i++;
		if(*(ptr+i)=='\0')
			break;
		word++;
		while(*(ptr+i)!='\0' && *(ptr+i)!=32)
			i++;
	}
	printf("\nAlphabets : %d\nSpace : %d\nWords : %d",alph,spa,word);

	free(ptr);
	getch();
}