#include<stdio.h>
void main()
{
	int per;
	printf("Enter your percentage : ");
	scanf("%d",per);
	if(per>=33 && per<=100)
	{
		printf("You are passed");
	}
	else
	{
		printf("You are fail");
	}
}
