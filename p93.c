//wap to find length of the string without using pre-defined function
#include<stdio.h>
void main()
{
	char str[100];
	int i,count=0;
	printf("Enter a string : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
