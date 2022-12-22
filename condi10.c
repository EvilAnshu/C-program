//wap to input two values and print largest number
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter Two number to check greater : ");
	scanf("%d%d",&a,&b);
	a>b?printf("%d is greater",a):printf("%d is greater",b);
}
