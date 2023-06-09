/*
Q 6. Write a C program to convert the string from upper case to lower case.
	Eg:
		Input String: India Is My Country
		Output String: india is my country
*/
#include<stdio.h>
#include<conio.h>
void main()
{	
	int i;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	printf("Updated String =");
	i=0;
	while(str[i]!='\n')
	{
		while(str[i]>=65 && str[i]<=90)
		{
			printf("%c",str[i]+32);			// a - A = 32  so we give difference of 32
			i++;
		}
		if(str[i]=='\n')
			break;
		printf("%c",str[i]);
		i++;
	}
}