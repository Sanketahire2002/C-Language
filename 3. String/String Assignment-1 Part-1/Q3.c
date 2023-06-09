/*
Q 3.Write a C program to print count of characters in given string.
*/
#include<stdio.h>
void main()
{
    int i,count;
    char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
    i=0;
    count=0;
    while(str[i]!='\n')
    {
        if(str[i]!=' ')			// except spaces
            count++;
        i++;        
    }
    printf("Number of Characters (except space) = %d",count);
}