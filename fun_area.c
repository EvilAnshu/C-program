// create a udf to find area of circle and square
#include<stdio.h>
void areaOfcircle(int num);
void main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	areaOfcircle(n);
}
void areaOfcircle(int num)
{
	printf("area of Circle : %f\n",3.14*square(num));
}
int square(int num)
{
	 return num*num;
}
