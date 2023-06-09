/*
Q 12. Write a C program to print Fibonacci series up to n terms.
*/
#include<stdio.h>
void main()
{
	int t,t1,t2,i,n;
	printf("Enter number of terms = ");
	scanf("%d",&n);
	t1=0;
	t2=1;
	printf("Fibonacci series = 0 , 1 ");
	for(i=3; i <= n ;i++)
	{
		t=t1+t2;
		printf(", %d ",t);
		t1=t2;
		t2=t;
	}
}


