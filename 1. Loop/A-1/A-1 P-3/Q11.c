/*
Q 11. Write a C program to print all Strong numbers between 1 to n.
*/
#include<stdio.h>
void main()
{
	int n,i,j,n1,sum,r,fact;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("Strong Numbers = ");
	for(i=1; i <= n ; i++)
	{
		n1=i;
		sum=0;
		for(n1; n1 > 0 ; n1)
		{
			r=n1%10;
			n1=n1/10;
			fact=1;
			j=2;
			while(j <= r)
			{
				fact=fact*j;
				j++;
			}
			sum=sum+fact;
		}
		if(sum == i)
			printf("  %d,",sum);
	}
}