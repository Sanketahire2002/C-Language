/*
Q 2. Write a C program to check whether a number is Prime number or not.
*/

#include<stdio.h>

void main()
{
	int n,i,prime,flag=0;
	printf("Enter numbr n = ");
	scanf("%d",&n);
	i=2;
	while(i <= n/2)
	{
		prime=n%i;
		if( prime == 0 )
		{
			printf("Number is Not Prime Number.");
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
		printf("Number is Prime Number.");
	
	/*
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count == 2)
		printf("Prime");
	else
		printf("Not prime");
	*/
}