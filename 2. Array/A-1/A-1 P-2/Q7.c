/*
Q 7. Write a C Program to Input a String & Store their Ascii Values in an Integer Array
*/
#include<stdio.h>
void main()
{
	int i,j,arr2[100];
	char arr[50];
	
	printf("Enter String =");
	fgets(arr,50,stdin);
	
	i=0;
	while(arr[i]!='\n')
	{
		arr2[i]=arr[i];
		i++;
	}	

	printf("Interger String : ");
	for(j=0;j<i;j++)
		printf("%d\t",arr2[j]);
}