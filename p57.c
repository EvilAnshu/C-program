#include<stdio.h>
int pow2(int base);
int power(int ,int);
void main()
{
	int b,p;
	printf("Enter base and power : ");\
	scanf("%d%d",&b,&p);
//	printf("%d\n",pow2(7));
	printf("power : %d\n",power(b,p));
}
int pow2(int base)
{
	return base*base;
}
int power(int base, int pow)
{
	int i,res=1;
	for(i=1;i<=pow;i++)
	{
		res=res*base;
	}
	return res;
}
