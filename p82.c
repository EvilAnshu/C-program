//wap to input a string and check how many times a present in string 
#include<stdio.h>
#include<string.h>
void main()
{
	char n[100];
	int i,count=0;
	printf("Enter your Name : ");
	gets(n);
	for(i=0;i<strlen(n);i++)
	{
		if(n[i]=='a')
		{
			count += 1;
		}
	}
	printf("%d times a present in %s ",count,n);
}
