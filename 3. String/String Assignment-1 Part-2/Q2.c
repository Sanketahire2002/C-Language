/*
Q 2. Write a C program which accept sentence from user and print number of white spaces from that
	sentence. 
	Eg:
		Input String: India is my country
		Output: 3
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sp,wsp;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	sp=0;
	wsp=0;
	i=0;
	while(str[i]!='\n')
	{
		if(str[i]==32)
			sp++;
		i++;
	}

	i=0;
	while(str[i]==32)
		i++;
	
	while(str[i]!='\n')
	{
		while(str[i]!=32 && str[i]!='\n')
			i++;
		
		while(str[i]==32)
			i++;
		
		if(str[i]!='\n')
			wsp++;
	}
	printf("Spaces : %d\nWhite Space : %d",sp,wsp);
}