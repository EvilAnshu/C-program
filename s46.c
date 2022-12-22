//Sum of All even number between 100 and 200
#include<stdio.h>
void main()
{
	int i,sum=0;
	for(i=100;i<=200;i++)
	{
		if(i%2==0)
		{
			sum += i;
		}
	}
	printf("Sum of All even number between 100 and 200 : %d",sum);
}
