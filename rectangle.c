#include<stdio.h>
void main()
{
	float l,b;
	printf("Enter 2 sides of Rectangle : ");
	scanf("%f%f",&b,&l);
	printf("Area of Rectangle : %f\n",l*b);
	printf("Parameter of Rectangle : %f",2*(l+b));
}
