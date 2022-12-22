//1.	Write a c program to convert number in characters.	
#include<stdio.h>
void main()
{
	int i;
	char c;
	printf("Enter a Number to convert in Character : ");
	scanf("%d",&i);
	c=i+'0';
	printf("%c",c);
}
