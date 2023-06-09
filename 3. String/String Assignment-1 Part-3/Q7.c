/*
Q 7. Write a C program which accept string from user and then accept range and reverse the string in that range without taking another string.
		Eg:
			Input String: India is my country
			Input of N1: 3
			Input of N1: 9
			Output String: Indm si aicountry
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,x,y,n1,n2;
	char str[100];
	
	printf("Enter String=");
	fgets(str,sizeof(str),stdin);
	
	printf("Enter n1 =");
	scanf("%d",&n1);
	printf("Enter n2 =");
	scanf("%d",&n2);
	
	n2=n2-n1;
	i=0;
	while(str[i]==32)
		i++;
	j=i;
	while(n1>0 && str[i]!='\n')
	{
		if(str[i]!=32)
		{
			x=i;
			n1--;
		}
		i++;
	}
	
	while(n2>0 && str[i]!='\n')
	{
		if(str[i]!=32)
		{
			y=i;
			n2--;
		}
		i++;
	}
	
	printf("Updated String=");
	
	while(j<x)
	{
		printf("%c",str[j]);
		j++;
	}
	
	while(y>=x)
	{
		printf("%c",str[y]);
		y--;
	}
	while(str[i]!='\n')
	{
		printf("%c",str[i]);
		i++;
	}

	getch();
}