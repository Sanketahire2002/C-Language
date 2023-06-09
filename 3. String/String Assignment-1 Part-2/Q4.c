/*
Q 4. Write a C program which accept sentence from user and print last word from that sentence.
	Eg:
		Input String: India is my country
		Output String: country
*/
#include<stdio.h>
#include<conio.h>
void main()
{	
	int i,start;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	printf("Last Word =");
	i=0;
	while(str[i]!='\n')
	{
		while(str[i]==32)
			i++;
		
		if(str[i]=='\n')
			break;
		
		start=i;
		
		while(str[i]!=32 && str[i]!='\n')
			i++;
	}
	
	while(str[start]!='\n' && str[start]!=' ')
	{
		printf("%c",str[start]);
		start++;
	}
	getch();
}