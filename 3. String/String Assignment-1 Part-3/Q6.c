/*
Q 6. Write a C program which accept string from user and then reverse the string till first N characters without taking another string.
		Eg:
			Input String: India is my country
			Input of N: 8
			Output : m si aidnIy country
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,n;
	char str[100];
	
	printf("Enter String=");
	fgets(str,sizeof(str),stdin);
	
	printf("Enter n =");
	scanf("%d",&n);
	
	printf("Updated String=");
	i=0;
	while(str[i]==32)
		i++;
	k=i;
	j=0;
	l=0;
	while(l<n && str[i]!='\n')
	{	
		if(str[i]!=32)
		{
			j=i;
			l++;
		}
		i++;
	}
	while(j>=k)
	{
		printf("%c",str[j]);
		j--;
	}
	while(str[i]!='\n')
	{
		printf("%c",str[i]);
		i++;
	}	
	getch();
}