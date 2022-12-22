//wap to input two strings and compare the string without using library function
// int strcomp(string1,string2)
#include<stdio.h>
#include<string.h>
int strcomp(char str2[],char str[]);
void main()
{
	char str[100],str2[100];
	printf("Enter first String : ");
	gets(str);
	printf("Enter second String : ");
	gets(str2);
	if(strcomp(str,str2)==0)
	{
		printf("Strings are equal..");
	}
	else
	{
		printf("Strings are not equal..");
	}
}
int strcomp(char str2[100],char str[100])
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str2[i]!=str[i])
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
