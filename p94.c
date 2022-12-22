//wap to find length of the string without using pre-defined function
#include<stdio.h>
int strlength(char name[100]);
void main()
{
	char str[100];
	printf("Enter a string : ");
	gets(str);
	printf("Length of %s is : %d",str,strlength(str));
}
int strlength(char name[100])
{
	int i,count=0;
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	return count;
}

