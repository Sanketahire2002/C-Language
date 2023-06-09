/*
Q 7. Write a C program which toggles the case of a string. Eg:
		Input String: technOrbit Infosystems
		Output String: TECHNoRBIT iNFOSYSTEMS
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i;
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
	
	printf("\nUpdated String =");
	i=0;
	while(*(ptr+i)!='\0')
	{	
		while(*(ptr+i)>=65 && *(ptr+i)<=90)
		{
			printf("%c",*(ptr+i)+32);
			i++;
		}
		while(*(ptr+i)>=97 && *(ptr+i)<=122)
		{
			printf("%c",*(ptr+i)-32);
			i++;
		}

		if(*(ptr+i)=='\0')
			break;
		
		if( *(ptr+i)<65 || *(ptr+i)>122 || (*(ptr+i)>90 && *(ptr+i)<97) )
		{
			printf("%c",*(ptr+i));
			i++;
		}
	}
	
	free(ptr);
	getch();
}