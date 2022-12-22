//wap to check whether sttring is palindrrome or not
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	printf("Enter a string : ");
	gets(str1);
	strcpy(str2,str1);
	strrev(str1);
	if(strcmp(str2,str1)==0)
	{
		printf("string is palindrome...");
	}
	else
	{
		printf("string is not palindrome...");
	}
}
