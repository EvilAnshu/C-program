// wap to find all armstrong numbers between 1 to 1000.
#include<stdio.h>
#include<math.h>
void main()
{
	int i,n;
	double sum;
	for(n=1;n<1000;n++)
	{
		i=n;
		sum=0;
		while(i>0)
		{
		
			sum=sum+pow(i%10,3);
			i=i/10;
		}
		if(sum==n)
		printf("%lf\t",sum);
	}
}
