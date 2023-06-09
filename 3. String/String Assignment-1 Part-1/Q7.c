/*
Q 7.Write a C program to replace space with ‘$’ in given string.
	Eg:
		Input String: India is my country
		Output String: India$is$my$coutry
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
	while(str[i]==32)
		i++;
	while(str[i]!='\n')
	{
		while(str[i]!=' ' && str[i]!='\n')
		{
			printf("%c",str[i]);
			i++;
		}
		
		while(str[i]==' ')
			i++;
		
		if(str[i]!='\n')
			printf("$");
	}
	getch();
}