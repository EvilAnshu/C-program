// wap to find all prime numbers between 1 to 100.
#include<stdio.h>
void main()
{
	int i,n,count;
	for(n=1;n<100;n++)
	{
		i=2;
		count=0;
		while(i<=n/2)
		{
			if(n%i==0)
			{
				count=1;
				break;
			}
			i++;
		}
		if(count==0)
			printf("%d\t",n);
		
	}
}
