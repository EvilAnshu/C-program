// wap to find all palidrome numbers between 1 to 1000.
#include<stdio.h>
void main()
{
	int i,n,sum;
	for(n=1;n<1000;n++)
	{
		i=n;
		sum=0;
		while(i>0)
		{
		
			sum=sum*10+i%10;
			i=i/10;
		}
		if(sum==n)
		printf("%d\t",sum);
	}
}
