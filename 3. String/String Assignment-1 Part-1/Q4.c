/*
Q4.Write a C program to accept string and print it in the reverse order.
	Eg:
		Input String: India is my country
		Output String: yrtnuoc ym si aidnI
	Convert multiple spaces into single (Don't give space before starting and ending of updated string)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,count;
    char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	printf("Updated String =");
	
    count=0;
    while(str[count]!='\n')
        count++;    
	i=count-1;
	while(str[i]==32)
		i--;
	while(i>=0)
	{
		while(str[i]!=32 && i>=0 )
        {
			printf("%c",str[i]);
			i--;
		}
		
		while(str[i]==32 && i>=0)
			i--;
			
		if(i>0)
			printf(" ");	
	}
	getch();
}