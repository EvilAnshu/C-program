//wap to input your name and 
//print name should be greater than 2 characters
//if length of name is less than 2
//otherwise print hello +name
#include<stdio.h>
#include<string.h>
void main()
{
	char name[100];
	printf("Enter Your Name : ");
	gets(name);
	if(strlen(name)>2)
	{
		printf("hello %s",name);
	}
	else
	{
		printf("name should be greater than 2 characters");
	}
}
