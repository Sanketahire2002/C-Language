/*
Q 15. Write a program in C to delete an element at desired position from an array. (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,del,flag;
    int* ptr=NULL;
    char ch;

    printf("How many elements you want to insert in array : ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
	
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",ptr+i);
    }

    printf("Array :  ");
    for(i=0;i<n;i++)
        printf("%d\t",*(ptr+i));

	printf("\n");
    do
    {
        printf("Enter element which you want to Delete : ");
        scanf("%d",&del);
        
        flag=0;
		for(i=0;i<n;i++)
		{
			if(*(ptr+i)==del)
			{
				flag=1;
				for(i=i;i<n-1;i++)
					*(ptr+i)=*(ptr+(i+1));
				printf("Element is Deleted.");
				n--;
				printf("\nNew Array :  ");
				for(i=0;i<n;i++)
					printf("%d\t",*(ptr+i));
				break;
			}
		}
		if(flag==0)
			printf("Element is not present in array.");

        printf("\nDo you want to Delete one more element ? (y or n) : ");
        scanf(" %c",&ch);
		getchar();
    } while(ch=='y');
}