/*
Q 5.Write a C program to count number of vowels and number of consonants in the given string.
*/
#include<stdio.h>
void main()
{
    int i,count,vowel,conso;
    char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
    vowel=0;
    conso=0;
    i=0;
    while(str[i]!='\n')
    {
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u' )
            vowel++; 
		else if( (str[i] >= 'a' && str[i] <= 'z')  ||  (str[i] >= 'A' && str[i] <= 'Z' ) )		
			// else if( (str[i] >= 97 && str[i] <=122)  ||  (str[i] >= 65 && str[i] <=90) )
                conso++;
        i++;
    }
    printf("Vowels = %d\nConsonents = %d",vowel,conso); 
}