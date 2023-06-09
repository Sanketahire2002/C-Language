/*
Q 11. Write a C program which accept string from user and accept number N then copy last N character into some another string.
	Eg:
		Input String: India is my country
		Input of N: 5
		Output String: untry
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	
	printf("Enter number upto which you want to print String = ");
	scanf("%d",&n);
	
	i=0;
	while(str[i]!='\n')
		i++;
	
	i=i-n;
	if(i<0)
		i=0;
	printf("Last String =");
	while(str[i]!='\n')
	{
		printf("%c",str[i]);
		i++;
	}
	
	getch();
}