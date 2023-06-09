/*
Q 5. Write a C program which accept sentence from user and position from user and print the word at that position. 
	Eg:
		Input String: India is my country
		Input Position: 3
		Output String: my
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,n,temp,start;
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
	
	printf("\nPosition =");
	scanf("%d",&n);

	i=0;
	temp=0;
	while(*(ptr+i)!='\0')
	{
		while(*(ptr+i)==32)
			i++;
		
		if(*(ptr+i)=='\0')
			break;
		
		temp++;
		
		if(temp==n)
		{
			start=i;
			break;
		}
		
		while(*(ptr+i)!=32 && *(ptr+i)!='\0')
			i++;
	}
	if(n<=temp)			// Or use flag variable as in if(temp==n) make flag=1 and use here if(flag==1)
	{
		printf("Word at Position %d =",n);
		while(*(ptr+start)!='\0' && *(ptr+start)!=' ')
		{
			printf("%c",*(ptr+start));
			start++;
		}
	}
	else
		printf("Given position of word exceeds the total actual words contain in string.");
	
	free(ptr);
	getch();
}