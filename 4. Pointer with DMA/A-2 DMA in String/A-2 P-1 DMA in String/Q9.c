/*
Q9. Write a C program to replace Good names in mail. 
	Eg:
		Raw String: Hello GoodName
		Input String: India 
		Output String: Hello India 
		Input String: Sangamner
		Output String: Hello Sangamner
		Input String: technOrbit
		Output String: Hello technOrbit
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,j,k,m,count,start,end,flag,size;
    char* ptr=NULL;
	char* rep=NULL;
	char *upd=NULL;
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

	size=1;
	upd=(char*)malloc(size*sizeof(char));
	*upd='\0';
	printf("Enter String to replace =");
	i=0;
	do
	{	
		scanf("%c",&ch);
		if(ch!='\n')
		{
			upd=(char*)realloc(upd,(size++)*sizeof(char));
			*(upd+i)=ch;
			*(upd+(i+1))='\0';
			i++;		
		}
	}while(ch!='\n');

	size=1;
	rep=(char*)malloc(size*sizeof(char));
	*rep='\0';
	printf("Which String to replace =");
	i=0;
	do
	{	
		scanf("%c",&ch);
		if(ch!='\n')
		{
			rep=(char*)realloc(rep,(size++)*sizeof(char));
			*(rep+i)=ch;
			*(rep+(i+1))='\0';
			i++;		
		}
	}while(ch!='\n');

	printf("Updated String =");

	i=0;
	while(*(ptr+i)!=*upd || *(ptr+i+1)!=*(upd+1) || *(ptr+i+2)!=*(upd+2))
	{
		printf("%c",*(ptr+i));
		i++;
	}
	i=0;
	while(*(rep+i)!='\0')
	{
		printf("%c",*(rep+i));
		i++;
	}

	free(ptr);
	free(rep);
	getch();
}