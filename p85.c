//wap to input a string and print the string in reverse order
		//tech : hcet
#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char str[100];
	printf("Enter a string : ");
	gets(str);
	printf("reverse string : ");
	for(i=strlen(str)-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
