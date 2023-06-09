/*
Q 1. Write a C program which accept sentence from user and print number of small letters, capital
	letters, Spaces and digits from that sentence. 
	Eg:
		Input String: abcDE 5Glm1 O
		Output String: Small: 5 Capital: 4 Digits: 2 Spaces: 2
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sm,cap,dig,sp;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	sm=0;
	cap=0;
	dig=0;
	sp=0;
	
	i=0;
	while(str[i]!='\n')
	{
		if(str[i]>=97 && str[i]<=122)
			sm++;
		if(str[i]>=65 && str[i]<=90)
			cap++;
		if(str[i]==32)
			sp++;
		if(str[i]>=48 && str[i]<=57)
			dig++;
		i++;
	}
	printf("Small : %d  Capital : %d  Digits : %d  Spaces : %d",sm,cap,dig,sp);
}