//wap to copy a string without using library function
#include<stdio.h>
#include<string.h>
void copy(char str2[],char str[]);
void main()
{
	char str[100],str2[100];
	printf("Enter a String : ");
	gets(str);
	copy(str2,str);
	printf("first string : %s copied string : %s",str,str2);
}
void copy(char str2[],char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		str2[i]=str[i];
	}
	str2[i]='\0';
}
