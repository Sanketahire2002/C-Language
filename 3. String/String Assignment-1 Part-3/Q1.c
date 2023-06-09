/*
Q 1. Write a C program which accept two strings from user and append second string after first string.
		Eg:
			Input String: India Country
			Output String: IndiaCountry
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char str[100],abc[100];
	
	printf("Enter String 1=");
	fgets(str,sizeof(str),stdin);
	printf("Enter String 2=");
	fgets(abc,sizeof(abc),stdin);
	
	i=0;
	while(str[i]!='\n')
		i++;
	
	j=0;
	while(abc[j]!='\n')
	{
		str[i]=abc[j];
		j++;
		i++;
	}
	str[i]='\0';
	printf("Updated String=%s",str);
	getch();
}