/*
Q 9. Write a C program which accept string from user and check whether string is palindrome or not.
		Eg:
			Input String: level
			Output String: String is palindrome.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,flag;
	char str[100];
	
	printf("Enter String=");
	fgets(str,sizeof(str),stdin);
	
	i=0;
	while(str[i]!='\n')
		i++;
	
	j=i-1;
	i=0;
	flag=0;
	while(i<j)
	{
		if(str[i]!=str[j])
		{
			flag=1;
			break;
		}
		i++;
		j--;
	}
	if(flag==0)
		printf("String is Pallindrome.");
	else
		printf("String is NOT Pallindrome.");
}