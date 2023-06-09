/*
Q 11. Write a C program which accepts a string from user which contains a characters from ‘b’ to ‘y’.
	Eg:
		Input String: mn jn kn kazfd
		Output String: mn jn kn kfd
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	printf("\nUpdated String =");
	i=0;
	while(str[i]!='\n')
	{
		if( (str[i]>='b' && str[i]<='y') || str[i]==32)
			printf("%c",str[i]);
		i++;
	}
	getch();
}