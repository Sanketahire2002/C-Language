/*
Q 2.Write a C program to accept string with multiple spaces from user and print it with a sinlge space as a delimiter.
Eg:
	Input String:
		_____India_____is_my_________country______________
	Output String:
		India_is_my_country (Consider _ as space)
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,size;
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
    while(*(ptr+i)==32)
		i++;
	printf("\nUpdated String =");
    while(*(ptr+i)!='\0')
    {
        while(*(ptr+i)!=32 && *(ptr+i)!='\0')
        {
            printf("%c",*(ptr+i));
            i++;
        }
		
		while(*(ptr+i)==32)
			i++;
		
		if(*(ptr+i-1)==32 && *(ptr+i)!='\0')
			printf(" ");
    }
	free(ptr);
	getch();
}