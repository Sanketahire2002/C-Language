/*
Q 10. Write a C program to print all fibonacci series upto each ASCII code of alphabates in given string.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,size,j,n1,n2,sum,temp,count;
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
	{
		n1=0;
		n2=1;
		sum=n1+n2;
		printf("\nFibonacci Series for character %c with ASCII value %d = 0 , 1  ",*(ptr+i),*(ptr+i));
		while(sum<=*(ptr+i))
		{
			printf(", %d ",sum);
			n1=n2;
			n2=sum;
			sum=n2+n1;
		}	
		i++;
	}
	free(ptr);
	getch();
}