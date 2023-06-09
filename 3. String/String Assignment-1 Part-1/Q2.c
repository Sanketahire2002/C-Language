/*
Q 2.Write a C program to accept string with multiple spaces from user and print it with a sinlge space as a delimiter.
Eg:
	Input String:
		_____India_____is_my_________country______________
	Output String:
		India_is_my_country (Consider _ as space)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	
	i=0;
    while(str[i]==32)
		i++;
	printf("Updated String =");
    while(str[i]!='\n')
    {
        while(str[i]!=32 && str[i]!='\n')
        {
            printf("%c",str[i]);
            i++;
        }
		
		while(str[i]==32)
			i++;
		
		if(str[i-1]==32 && str[i]!='\n')
			printf(" ");
    }
	getch();
}