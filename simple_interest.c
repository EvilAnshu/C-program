// wap to find simple interest for given principal amount,rate of interest and time period
#include<stdio.h>
void main()
{
	float pa,in,t;
	printf("Enter The value of Principal amount, Rate of interest and time period : ");
	scanf("%f%f%f",&pa,&in,&t);
	printf("Interset : %f",(pa*in*t)/100);
}
