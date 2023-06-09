/*
Q 5. Write a C program to find all prime factors of a number.
*/
#include<stdio.h>
void main()
{
	int n,i,j,p,flag;
	printf("Enter  n = ");
	scanf("%d",&n);
	printf("Prime Factors = ");
	for(j=2; j <= n ; j++)
	{
		flag=0;
		i=2;
		while(i <= j/2)
		{
			p=j%i;
			if(p == 0)
			{
				flag=1;
				break;
			}
			i++;
		}
		if(flag == 0)
		{
			if(( n % j ) == 0)
				printf("  %d  ,",j);
		}
	}	
}