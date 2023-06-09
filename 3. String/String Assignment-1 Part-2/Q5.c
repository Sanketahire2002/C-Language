/*
Q 5. Write a C program which accept sentence from user and position from user and print the word at that position. 
	Eg:
		Input String: India is my country
		Input Position: 3
		Output String: my
*/
#include<stdio.h>
#include<conio.h>
void main()
{	
	int i,n,temp,start;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	
	printf("Position =");
	scanf("%d",&n);

	i=0;
	temp=0;
	while(str[i]!='\n')
	{
		while(str[i]==32)
			i++;
		
		if(str[i]=='\n')
			break;
		
		temp++;
		
		if(temp==n)
		{
			start=i;
			break;
		}
		
		while(str[i]!=32 && str[i]!='\n')
			i++;
	}
	if(n<=temp)			// Or use flag variable as in if(temp==n) make flag=1 and use here if(flag==1)
	{
		printf("Word at Position %d =",n);
		while(str[start]!='\n' && str[start]!=' ')
		{
			printf("%c",str[start]);
			start++;
		}
	}
	else
		printf("Given position of word exceeds the total actual words contain in string.");
	getch();
}