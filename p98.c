//wap to find length of the string without using pre-defined function
#include<stdio.h>
#include<string.h>
int length(char str[]);
void main()
{
	char str[100];
	printf("Enter a String : ");
	gets(str);
	printf("Length of %s is %d",str,length(str));
}
int length(char str[])
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
