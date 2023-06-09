/*
Q 10. Write a C program to count number of alphabates, spaces and words in given string.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,alph,spa,word;
	char str[100];
	
	printf("Enter String=");
	fgets(str,sizeof(str),stdin);
	
	alph=0;
	spa=0;
	word=0;
	i=0;
	while(str[i]!='\n')
	{
		if(str[i]==32)
			spa++;
		if( (str[i]>=65&&str[i]<=90) || (str[i]>=97&&str[i]<=122) )
			alph++;
		i++;
	}
	
	i=0;
	while(str[i]!='\n')
	{
		while(str[i]==32)
			i++;
		if(str[i]=='\n')
			break;
		word++;
		while(str[i]!='\n' && str[i]!=32)
			i++;
	}
	printf("Alphabets : %d\nSpace : %d\nWords : %d",alph,spa,word);
}