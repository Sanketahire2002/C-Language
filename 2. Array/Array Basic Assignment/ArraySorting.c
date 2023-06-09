/*
Q. Array Shorting in Ascending and Descending Order
*/
#include<stdio.h>
void main()
{
	int i,j,k,temp,min,max,arr[10],arr2[10],as[10],ds[10],asco[10],deso[10];
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("Enter a Element at index %d in Array = ",i);
		scanf("%d",&arr[i]);
		arr2[i]=arr[i];
		as[i]=arr[i];
		ds[i]=arr[i];
	}
	printf("\tArray =\t");
	for(i=0;i<10;i++)
		printf("\t%d",arr[i]);
	
	// Ascending Order
	for(j=0;j<10;j++)
	{
		min=arr[0];
		k=0;
		for(i=1;i<10;i++)
		{
			if(min>arr[i])
			{
				min=arr[i];
				k=i;
			}
		}
		arr[k]=2147483645;
		asco[j]=min;
	}
	printf("\nAscending Order =");
	for(i=0;i<10;i++)
		printf("\t%d",asco[i]);
	
	// Ascending Order by Shifting Method
	for(i=0;i<10;i++)
	{
		min=as[i];
		k=i;
		for(j=i;j<10;j++)
		{
			if(min>as[j])
			{
				min=as[j];
				k=j;
			}
		}
		temp=as[k];			// Shifting
		as[k]=as[i];
		as[i]=temp;
	}
	printf("\nAscending Order 2 =");
	for(i=0;i<10;i++)
		printf("\t%d",as[i]);
	
	// Descending Order
	for(j=0;j<10;j++)
	{
		max=arr2[0];
		k=0;
		for(i=1;i<10;i++)
		{
			if(max<arr2[i])
			{
				max=arr2[i];
				k=i;
			}
		}
		arr2[k]= -2147483645;
		deso[j]=max;
	}
	printf("\nDescending Order =");
	for(i=0;i<10;i++)
		printf("\t%d",deso[i]);
	
	// Descending Order by Shifting Method
	for(i=0;i<10;i++)
	{
		max=ds[i];
		k=i;
		for(j=i;j<10;j++)
		{
			if(max<ds[j])
			{
				max=ds[j];
				k=j;
			}
		}
		temp=ds[k];			// Shifting
		ds[k]=ds[i];
		ds[i]=temp;
	}
	printf("\nDescending Order 2 =");
	for(i=0;i<10;i++)
		printf("\t%d",ds[i]);
}