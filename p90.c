//wap to use strcmp() function
#include<stdio.h>
#include<string.h>
void main()
{
	char name[100];
	printf("Enter your name : ");
	gets(name);
	printf("reverse : %s",strrev(name));
}
