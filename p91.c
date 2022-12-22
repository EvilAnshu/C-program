//wap to cheeck given string is polindrome or not
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],temp[100];
	printf("Enter a string : ");
	gets(str);
	strcpy(temp,str);
	strrev(str);
	if(strcmp(str,temp)==0)
	{
		printf("%s is polindrome string...",temp);
	}
	else
	{
		printf("%s is not a polindrome string...",temp);
	}
}
