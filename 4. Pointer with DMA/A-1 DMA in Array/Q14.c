/*
Q 14. Write a program in C to insert New value in the array (sorted list ). (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,j,new,temp;
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

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }

    printf("\nSorted Array :  ");
    for(i=0;i<n;i++)
        printf("%d\t",*(ptr+i));

    int* q=NULL;
	
	printf("\n");
    do
    {
        printf("Enter element which you want to insert : ");
        scanf("%d",&new);
        
        q=(int*)realloc(ptr,(n++));

		//for(i=0;i<n;i++)
			//printf("%d",*(q+i));
		
        for(i=0;i<n-1;i++)
            if(*(q+i) > new)
                break;
    
        for(j=n-1;j>i;j--)
            *(q+j)=*(q+(j-1));
        *(q+i)=new;

        printf("New Array :  ");
        for(i=0;i<n;i++)
            printf("%d\t",*(q+i));

        printf("\nDo you want to add one more element ? (y or n) : ");
        scanf(" %c",&ch);
		getchar();
    } while(ch=='y');
}