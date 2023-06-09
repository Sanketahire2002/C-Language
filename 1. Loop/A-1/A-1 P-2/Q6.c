/*
Q 6. Write a C program to find frequency of each digit in a given integer.
*/
#include<stdio.h>
void main()
{
	int n,n1,n2,r1,i,digit,pro,r2,count;
	printf("Enter n = ");
	scanf("%d",&n);
	n1=n;
	n2=n;
	digit=0;
	while(n1 > 0)
	{
		n1=n1/10;
		digit++;
	}
	n1=n;
	pro=1;
	for(i=1; i<digit ;i++)
		pro=pro*10;
	while(pro != 0)
	{
		r1=n1/pro;
		n1=n1%pro;
		pro=pro/10;
		count=0;
		while(n2 > 0)
		{
			r2=n2%10;
			n2=n2/10;
			if(r1 == r2)
				count++;	
		}
		printf(" %d : ",r1);
		printf(" %d \n",count);
		n2=n;
	}
}