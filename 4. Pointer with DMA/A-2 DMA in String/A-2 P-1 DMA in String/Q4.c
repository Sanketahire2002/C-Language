/*
Q4.Write a C program to accept string and print it in the reverse order.
	Eg:
		Input String: India is my country
		Output String: yrtnuoc ym si aidnI
	Convert multiple spaces into single (Don't give space before starting and ending of updated string)
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,size,count;
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

	printf("\nReversed String =");
	count=0;
    while(*(ptr+count)!='\0')
        count++;    
	i=count-1;
	while(*(ptr+i)==32)
		i--;
	while(i>=0)
	{
		while(*(ptr+i)!=32 && i>=0 )
        {
			printf("%c",*(ptr+i));
			i--;
		}
		
		while(*(ptr+i)==32 && i>=0)
			i--;
			
		if(i>0)
			printf(" ");	
	}
	free(ptr);
	getch();
}