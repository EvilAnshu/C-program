//wap to use strlen() function
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int len;
	printf("Enter a String : ");
	gets(str);
	len=strlen(str);
	printf("length of %s is %d",str,len);
}
