/*
Q 7. Write a C program which toggles the case of a string. Eg:
		Input String: technOrbit Infosystems
		Output String: TECHNoRBIT iNFOSYSTEMS
*/
#include<stdio.h>
#include<conio.h>
void main()
{	
	int i;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	printf("Updated String =");
	i=0;
	while(str[i]!='\n')
	{	
		while(str[i]>=65 && str[i]<=90)
		{
			printf("%c",str[i]+32);
			i++;
		}
		while(str[i]>=97 && str[i]<=122)
		{
			printf("%c",str[i]-32);
			i++;
		}

		if(str[i]=='\n')
			break;
		
		if( str[i]<65 || str[i]>122 || (str[i]>90 && str[i]<97) )
		{
			printf("%c",str[i]);
			i++;
		}
	}
}