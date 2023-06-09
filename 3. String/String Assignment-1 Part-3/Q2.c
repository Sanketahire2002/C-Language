/*
Q 2. Write a C program which accept two strings from user and append N characters of second string
	after first string. 
		Eg:
			Input String: India Country
			Input of N: 4
			Output String: IndiaCoun
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	char str[100],abc[100];
	
	printf("Enter String 1=");
	fgets(str,sizeof(str),stdin);
	printf("Enter String 2=");
	fgets(abc,sizeof(abc),stdin);
	
	printf("Enter n=");
	scanf("%d",&n);
	
	
	i=0;
	while(str[i]!='\n')
		i++;
	
	j=0;
	while(j<n && abc[j]!='\n')
	{
		str[i]=abc[j];
		j++;
		i++;
	}
	str[i]='\0';
	printf("Updated String =%s",str);
	getch();
}