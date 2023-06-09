/*
Q 9. Write a C program which accept string from user and copy that string into some another string.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char str[100],copy[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	
	i=0;
	while(str[i]!='\0')	// At time of assigning values we have to put \n or \0 . Compiler didn't put it implicitly  So we run loop upto \0 and then we store \n also in copied array for apply condition on next loop of printing
	{
		copy[i]=str[i];
		i++;
	}
	printf("Copied String =");
	i=0;
	while(copy[i]!='\n')
	{
		printf("%c",copy[i]);
		i++;
	}
	
	getch();
}