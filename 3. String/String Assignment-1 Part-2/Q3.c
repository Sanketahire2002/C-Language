/*
Q 3. Write a C program which accept sentence from user and print number of words of even and odd
	length from that sentence. 
	Eg:
		Input String: India is my country. I love my country.
		Output : Even: 5 Odd: 2
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,even,odd;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	even=0;
	odd=0;
	i=0;
	while(str[i]!='\n')
	{
		while( ( str[i]<65 || str[i]>122 || (str[i]>90 && str[i]<97) ) && str[i] != '\n' )
			i++;
		
		if(str[i]=='\n')
			break;
		
		j=0;
		while( ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) )&& str[i]!='\n' )
		{
			j++;
			i++;
		}
		
		if(j%2==0)
			even++;
		else
			odd++;
		
	}
	printf("\nWords =>\n\t\tEven : %d\n\t\tOdd : %d",even,odd);
}