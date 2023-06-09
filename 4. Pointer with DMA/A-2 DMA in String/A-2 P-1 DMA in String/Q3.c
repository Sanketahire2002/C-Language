/*
Q 3.Write a C program to print count of characters in given string.
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

	i=0;
    count=0;
    while(*(ptr+i)!='\0')
    {
        if(*(ptr+i)!=' ')			// except spaces
            count++;
        i++;        
    }
    printf("\nNumber of Characters (except space) = %d",count);
	free(ptr);
	getch();
}