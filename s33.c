#include<stdio.h>
float area(float,float);
float area(float l,float b)
{
	float ar;
	ar=l*b;
	return(ar);
}
void main()
{
	float rad,l,b,a;
	printf("Enter length and breath : ");
	scanf("%f%f",&l,&b);
	a=area(l,b);
	printf("Area = %f",a);
	
}
