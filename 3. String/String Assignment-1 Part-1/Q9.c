/*
Q9. Write a C program to replace Good names in mail. 
	Eg:
		Raw String: Hello GoodName
		Input String: India 
		Output String: Hello India 
		Input String: Sangamner
		Output String: Hello Sangamner
		Input String: technOrbit
		Output String: Hello technOrbit
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m,count,start,end,flag;
	char str[100],rep[100],upd[100],out[100],ch;
	printf("Enter Raw String =");
	fgets(str,sizeof(str),stdin);
	
	printf("On which place you want to replace =");
	fgets(rep,sizeof(rep),stdin);
	
	printf("Enter String to update =");
	fgets(upd,sizeof(upd),stdin);
	
	i=0;
	flag=0;
	while(str[i]!='\n')
	{
		j=0;
		while(str[i]==rep[j])
		{
			if(flag==0)
			{
				start=i;
			}
			flag=1;
			i++;
			j++;
		}
		end=i-1;
		if(flag==1)
		{
			m=start;
			k=0;
			while(upd[k]!='\n')
			{
				out[m]=upd[k];
				k++;
				m++;
			}
			while(str[i]!='\n')
			{
				out[m]=str[i];
				m++;
				i++;
			}
			out[m]='\0';
			break;
		}
		else
		{
			out[i]=str[i];
		}
		i++;
	}
	printf("New String =%s",out);
	
	getch();
}
