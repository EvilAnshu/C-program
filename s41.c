// wap to find all prime numbers between 1 to 200.
#include<stdio.h>
void main()
{
	int i,n,count;
	for(n=2;n<200;n++)
	{
		count=0;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				count=1;
				break;
			}
		}
		if(count==0)
			printf("%d\t",n);
		
	}
}
