/*
Q 3. Write a C program which accept sentence from user and print number of words of even and odd
	length from that sentence. 
	Eg:
		Input String: India is my country. I love my country.
		Output : Even: 5 Odd: 2
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,j,even ,odd,size;
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
	
	even=0;
	odd=0;
	i=0;
	while(*(ptr+i)!='\0')
	{
		while( ( *(ptr+i)<65 || *(ptr+i)>122 || (*(ptr+i)>90 && *(ptr+i)<97) ) && *(ptr+i) != '\0' )
			i++;
		
		if(*(ptr+i)=='\0')
			break;
		
		j=0;
		while( ((*(ptr+i)>=65 && *(ptr+i)<=90) || (*(ptr+i)>=97 && *(ptr+i)<=122) )&& *(ptr+i)!='\0' )
		{
			j++;
			i++;
		}
		
		if(j%2==0)
			even++;
		else
			odd++;
		
	}
	printf("\nWords =>\n\tEven : %d\n\tOdd : %d",even,odd);
	
	free(ptr);
	getch();
}