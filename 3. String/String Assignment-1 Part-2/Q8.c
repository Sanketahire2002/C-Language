/*
Q 8. Write a C program to check whether given strings are Anagram strings or not.
		Eg:
			Input String1: abccd
			Input String2: cbcda
			Output String: Strings are anagram
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,flag;
	char str[100],abc[100];
	
	printf("Enter String 1=");
	fgets(str,sizeof(str),stdin);
	
	printf("Enter String 2=");
	fgets(abc,sizeof(abc),stdin);
	
	i=0;
	while(str[i]!='\n')
	{
		flag=0;
		j=0;
		while(abc[j]!='\n')
		{
			if(str[i]==abc[j])
			{
				flag=1;
				break;
			}
			j++;
		}
		if(flag==0)
			break;
		i++;
	}
	i=0;
	if(flag==1)
		while(abc[i]!='\n')
		{
			flag=1;
			j=0;
			while(str[j]!='\n')
			{
				if(str[i]==abc[j])
				{
					flag=2;
					break;
				}
				j++;
			}
			if(flag==1)
				break;
			i++;
		}
	if(flag==2)
		printf("Strings are Anagram strings");
	else
		printf("Strings are NOT Anagram strings");
}