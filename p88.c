//wap to use strcpy() function
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],str2[100];
	printf("Enter a String : ");
	gets(str);
	//strcpy(str2,str);
	strncpy(str2,str,4);
	printf("String 1 : %s and String 2 : %s",str,str2);
}
