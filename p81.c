// wap to input your name and print how many times a present in your name.
#include<stdio.h>
#include<string.h>
void main()
{
	char name[100],i;
	printf("Enter Your Name : ");
	//scanf("%[^\n]",&name);
	gets(name);
	//printf("length of string = %d",strlen(name));
//	for(i=0;i<strlen(name);i++)
//	{
//		printf("hello\n");
//	}
	for(i=0;name[i]!='\0';i++)
	{
		printf("hello\n");
	}
}
