/*
Q 7. Write a C program to print all Armstrong numbers between 1 to n.
*/
#include<stdio.h>
void main()
{
	int n,n1,n2,i,j,k,r,pro,sum;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("Armstrong Numbers = ");
	for(i=0; i <= n ;i++)
	{
		n1=i;
		n2=i;
		sum=0;
		j=0;
		while(n1 > 0)
		{
			j++;
			n1=n1/10;
		}
		while(n2>0)
		{
			r=n2%10;			
			n2=n2/10;			
			pro=1;
			k=1;				
			while(k <= j)
			{
				pro=pro*r;
				k++;			
			}					
			sum=sum+pro;		
		}
		if(sum == i)
			printf(" %d,",i);
	}
}