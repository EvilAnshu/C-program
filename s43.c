// wap to print all perfect number between 1 and 500
#include<stdio.h>
void main()
{
	int i,n,sum;
	for(n=1;n<=500;n++)
	{
		sum=0;
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
			{
				sum+=i;			
			}
		}
		if(sum==n)
		printf("%d\t",n);
	}
}
