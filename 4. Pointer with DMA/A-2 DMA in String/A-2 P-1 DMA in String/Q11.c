/*
Q 11. Write a C program which accepts a string from user which contains a characters from ‘b’ to ‘y’.
	Eg:
		Input String: mn jn kn kazfd
		Output String: mn jn kn kfd
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
	
	printf("\nUpdated String =");
	i=0;
	while(*(ptr+i)!='\0')
	{
		if( (*(ptr+i)>='b' && *(ptr+i)<='y') || *(ptr+i)==32)
			printf("%c",*(ptr+i));
		i++;
	}
	free(ptr);
	getch();
}