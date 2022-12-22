#include<stdio.h>
void main()
{
	int n,c=0,count=0,i,j,prime=1;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(i=1;;i++)
	{
		c=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				c=1;
				break;
			}
		}
		if(c==0)
		{
			count++;
			prime=i;
		}
		if(count==n)
		break;
	}
	printf("%dth prime number is %d",n,prime);
}
