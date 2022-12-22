//wap to use strcmp() function
#include<stdio.h>
#include<string.h>
void main()
{
	char name1[100],name2[100];
	int res;
	printf("Enter your name : ");
	gets(name1);
	printf("Enter your last name : ");
	gets(name2);
//	res=strcmp(name1,name2);
	res=strncmp(name1,name2,4);
	printf("return value : %d",res);
}
