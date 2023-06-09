/*
Q 10. Write a C program to count of number of vowels and number of consonants in the given string. (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,vowel=0,conso=0,size=1;
    char* ptr=NULL;
	char ch;
	
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

	for(i=0;*(ptr+i)!='\0';i++)
		if(*(ptr+i)=='A' || *(ptr+i)=='E' || *(ptr+i)=='I' || *(ptr+i)=='O' || *(ptr+i)=='U' || *(ptr+i)=='a' || *(ptr+i)=='e' || *(ptr+i)=='i' || *(ptr+i)=='o' || *(ptr+i)=='u' )
			vowel++;
		else if((*(ptr+i)>=97&&*(ptr+i)<=122)||(*(ptr+i)>=65&&*(ptr+i)<=90))
			conso++;
	
	printf("\nVowels=%d\nConsonents=%d",vowel,conso);
	
	free(ptr);
	getch();
}