/*
Q 10. Write a C program to print all fibonacci series upto each ASCII code of alphabates in given string.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n1,n2,sum;
	char str[100];
	printf("Enter Raw String =");
	fgets(str,sizeof(str),stdin);
	
	i=0;
	while(str[i]!='\n')
	{
		n1=0;
		n2=1;
		sum=n1+n2;
		printf("Fibonacci Series for character %c with ASCII value %d = 0 , 1  ",str[i],str[i]);
		while(sum<=str[i])
		{
			printf(", %d ",sum);
			n1=n2;
			n2=sum;
			sum=n2+n1;
		}	
		printf("\n");
		i++;
	}
	getch();
}