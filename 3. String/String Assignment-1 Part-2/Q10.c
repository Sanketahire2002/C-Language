/*
Q 10. Write a program which accept string from user and copy first N charaters into some destination   string.
		Eg:
			Input String: India is my country
			Input of N: 8
			Output String: India is
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
	while(str[i]==32)
		i++;
		
	printf("Updated String =");
	while(n>0 && str[i]!='\n')
	{
		printf("%c",str[i]);
		i++;
		n--;
	}
	getch();
}