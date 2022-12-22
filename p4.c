//two numbers is given by user , wap to add these numbers if given numbers are even
// and multiply these numbers if given numbers are odd
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two Numbers : ");
	scanf("%d%d",&a,&b);
	a%2==0 && b%2==0 ? printf("Sum is : %d",a+b):printf("Product is : %d",a*b);
}
