/*
Q 1. Write a C program to find LCM of two numbers.
*/
#include<stdio.h>

void main()
{
	int n1,n2,LCM,i,j,p,max;
	printf("Enter First number = ");
	scanf("%d",&n1);
	printf("Enter Second number = ");
	scanf("%d",&n2);
	max=n1>n2?n1:n2;
	for(i=max;	;i++)
	{
		if(i%n1==0 && i%n2==0)
		{
			LCM=i;
			break;
		}	
	}
	/*
	LCM=1;
	i=2;
	while(n1 != 1 || n2 != 1)
	{	
									//printf("\nn1= %d\nn2= %d\n",n1,n2);
		p=0;
		for(j=2; j <= i/2 ;j++)
		{
			if(i%j == 0 )
			{	
				p=1;
				break;
			}
		}
									//printf("\nPrime Number = %d\n",i);
		if(p == 0)
		{
			lab2:
			if(n1%i == 0 || n2%i == 0)
			{
				LCM=LCM*i;
				if(n1%i == 0)
					n1=n1/i;
				if(n2%i == 0)
					n2=n2/i;
			}
		}
									//printf("\nn1= %d\nn2= %d\n",n1,n2);
		if(n1%i != 0 && n2%i != 0)
			i++;
		else
			goto lab2;
	}
	*/
	printf("LCM = %d",LCM);
}