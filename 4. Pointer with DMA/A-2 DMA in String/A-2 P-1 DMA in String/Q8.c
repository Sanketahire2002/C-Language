/*
Q 8. Write a program which accept sentence from user and print number of words from that sentence.
		Input String: India_is_my_country
		Output: 4
		Input String: India is my country (Consider _ as space)
		Output: 4
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,size,j,temp,count;
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
	
	count=0;
	i=0;
	while(*(ptr+i)!='\0')
	{
		while(*(ptr+i)==32)
			i++;
		
		if(i==0 || (*(ptr+i-1)==32 && *(ptr+i)!='\0'))
			count++;
		
		while(*(ptr+i)!=' ' && *(ptr+i)!='\0')
			i++;
	}
	printf("\nNumber of Words = %d",count);
	free(ptr);
	getch();
}