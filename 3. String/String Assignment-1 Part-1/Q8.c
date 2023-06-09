/*
Q 8. Write a program which accept sentence from user and print number of words from that sentence.
		Input String: India_is_my_country
		Output: 4
		Input String: India is my country (Consider _ as space)
		Output: 4
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,count;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	
	count=0;
	i=0;
	while(str[i]!='\n')
	{
		while(str[i]==32)
			i++;
		
		if(i==0 || (str[i-1]==32 && str[i]!='\n'))
			count++;
		
		while(str[i]!=' ' && str[i]!='\n')
			i++;
	}
	printf("Numbr of Words = %d",count);
	getch();
}