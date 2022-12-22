//2.	C Program to read two integers M and N & swap their value without using Third variable.	
#include<stdio.h>
void main()
{
	int m,n;
	printf("Enter two Numbers : ");
	scanf("%d%d",&m,&n);
	printf("before swap value of m is %d and value of n is %d\n",m,n);
	m=m+n;
	n=m-n;
	m=m-n;
	printf("after swap value of m is %d and value of n is %d",m,n);
}
