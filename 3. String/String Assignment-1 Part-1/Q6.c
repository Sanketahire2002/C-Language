/*
Q 6.Write a C program to reverse a given string as below.
	Eg:
		Input String: India is my country
		Output String: aidnI si ym yrtnuoc
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	printf("Updated String =");
	
	i=0;
	while(str[i]==32)
		i++;
	while(str[i]!='\n')
	{
		j=0;
		while(str[i]!=32 && str[i]!='\n')
		{
			j++;
			i++;
		}
		temp=i-1;
		while(j>0)
		{
			printf("%c",str[temp]);
			temp--;
			j--;
		}
		
		while(str[i]==32)
			i++;
		
		if(str[i]!=10)			// ASCII value of \n is 10
			printf(" ");
	}
	getch();
}