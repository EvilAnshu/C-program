// wap to find all armstrong numbers between 1 to n.
#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,num;
	double sum;
	printf("Enter last number : ");
	scanf("%d",&num);
	for(n=1;n<=num;n++)
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
