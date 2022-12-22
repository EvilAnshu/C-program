//wap to input your name and print sort form of name 
		//ram kumar verma : r.k.v
		//ram kumar verma : r.k.verma
#include<stdio.h>
#include<string.h>
void main()
{
	char name[100],sortname[100];
	int i,j=2,sp;
	printf("Enter Your name : ");
	gets(name);
	sortname[0]=name[0];
	sortname[1]='.';
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			sortname[j]=name[i+1];
			sortname[j+1]='.';
			j += 2;
			sp=i;
		}
	}
	j=j-2;
	//get all characters of name from last space index to length
	for(i=sp+1;name[i]!='\0';i++)
	{
		sortname[j]=name[i];
		j++;
	}
	sortname[j]='\0';
	puts(sortname);
}
