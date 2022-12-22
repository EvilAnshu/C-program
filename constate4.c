#include<stdio.h>
void main()
{
	int per;
	printf("Enter your percentage : ");
	scanf("%d",&per);
	if(per>=33 && per<=100)
	{
		printf("You are passed");
	}
	else if(per>=0 && per<33)
	{
		printf("You are fail");
	}
	else
	{
		printf("Enter a valid percentage...");
	}
}
