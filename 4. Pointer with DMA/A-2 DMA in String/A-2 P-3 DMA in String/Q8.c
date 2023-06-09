/*
Q 8. Write a C program which accept string from user and reverse words from that string which are of even length.
		Eg:
			Input String: India is my country. I love my country.
			Output String: India si ym .yrtnuoc I evol ym . Yrtnuoc
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,j,k,m;
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
	while(*(ptr+i)==32)
		i++;
	
	while(*(ptr+i)!='\0')
	{
		j=0;
		k=i;
		while(*(ptr+i)!=32 && *(ptr+i) !='\0')
		{
			j++;
			i++;
		}
		m=i-1;
		if(j%2==0)
			while(m>=k)
			{
				printf("%c",*(ptr+m));
				m--;
			}
		else
			while(k<i)
			{
				printf("%c",*(ptr+k));
				k++;
			}
		if(*(ptr+i)=='\0')
			break;
		if(*(ptr+i)==' ')
			printf(" ");
		i++;
	}

	free(ptr);
	getch();
}