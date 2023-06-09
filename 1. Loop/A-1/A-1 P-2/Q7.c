/*
Q 7.  Write a C program to enter a number and print it in words.
*/
#include<stdio.h>

void main()
{
	int n,n1,j,div,r1;
	int i=0;
	printf("Enter number n = ");
	scanf("%d",&n);
	n1=n;
	div=1;
	
	while(n1>0)
	{
		n1=n1/10;
		i++;
	}
	
	for(j=1 ; j<i ; j++)
		div=div*10;

	while(div>0)
	{
		r1=n/div;
		n=n%div;
		div=div/10;
		
		switch(r1)
		{
			case 0:
				printf("Zero  ");
				break;
			case 1:
				printf("One  ");
				break;
			case 2:
				printf("Two  ");
				break;
			case 3:
				printf("Three  ");
				break;
			case 4:
				printf("Four  ");
				break;
			case 5:
				printf("Five  ");
				break;
			case 6:
				printf("Six  ");
				break;
			case 7:
				printf("Seven  ");
				break;
			case 8:
				printf("Eight  ");
				break;
			case 9:
				printf("Nine  ");
				break;
		}
	}
	// Otherwise reverse number and then split into digits then apply switch case
}