/*
Q 11. Write a C program to find GCD (GCD) of two numbers.
*/
#include<stdio.h>
void main()
{
	int n1,n2,GCD,i,j,flag,small;
	printf("Enter First number = ");
	scanf("%d",&n1);
	printf("Enter Second number = ");
	scanf("%d",&n2);
	if(n1 <= n2)			// small=n1<=n2?n1:n2;
		small=n1;
	else 
		small=n2;
	for(i=1,i<=small;i++)
	{
		if(n1%i == 0 && n2%i == 0)
			GCD=i;
	}
	/*
	i=2;
	GCD=1;
	while(i <= small)
	{
		flag=0;
		for(j=i ; j<=i/2 ;j++)
		{
			if(j%i == 0)
			{
				flag==1;
				break;
			}
		}
		if(flag == 0)
		{
			lable:
			if(n1%i == 0 && n2%i == 0)
			{
				GCD=GCD*i;
				n1=n1/i;
				n2=n2/i;
			}
		}			
		if(n1%i != 0 || n2%i != 0)
			i++;
		else
			goto lable;
	}
	*/
	printf("GCD = %d",GCD);
}