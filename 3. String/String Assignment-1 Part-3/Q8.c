/*
Q 8. Write a C program which accept string from user and reverse words from that string which are of even length.
		Eg:
			Input String: India is my country. I love my country.
			Output String: India si ym .yrtnuoc I evol ym . Yrtnuoc
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,j,m;
	char str[100];
	
	printf("Enter String=");
	fgets(str,sizeof(str),stdin);
	
	i=0;
	while(str[i]==32)
		i++;
	
	while(str[i]!='\n')
	{
		j=0;
		k=i;
		while(str[i]!=32 && str[i] !='\n')
		{
			j++;
			i++;
		}
		m=i-1;
		if(j%2==0)
			while(m>=k)
			{
				printf("%c",str[m]);
				m--;
			}
		else
			while(k<i)
			{
				printf("%c",str[k]);
				k++;
			}
		if(str[i]=='\n')
			break;
		if(str[i]==' ')
			printf(" ");
		i++;
	}
	
}