#include<stdio.h>
void main()
{
	int a=5,b=3,c=2,x,y;
	x=a++%--b;
	y=--x+c++/a--*++b;
	printf("%d %d %d %d",a,b,x,y);
}

