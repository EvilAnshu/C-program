#include<stdio.h>
void main()
{
	int i,n,n1=0,n2=1,sum=n2+n1;
	printf("Enter no. of terms in series.. : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",sum);
		sum=n2+n1;
		n1=n2;
		n2=sum;
	}
}
