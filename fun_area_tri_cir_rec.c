//int mul(int num)
//wap to input choice of user
/*
if user presses 1 then find area of circle(3.14*r*r)
if 2 then find area of rectangle (l*b)
if 3 then find area of triangle (1/2*b*h)
*/
#include<stdio.h>
int mul(int n1, int n2);
void main()
{
	int n1,n2,ch;
	printf("Enter two value : ");
	scanf("%d%d",&n1,&n2);
	printf("Enter 1 for area of circle , 2 for area of rectangle, 3 for area of triangle : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Area of circle : %f",3.14*mul(n1,n1));
			break;
		case 2:
			printf("Area of rectangle : %d",mul(n1,n2));
			break;
		case 3:
			printf("Area of triangle : %f",(1.0/2)*mul(n1,n2));
			break;
		default:
			printf("Enter a valid choice");
	}
	
}
int mul(int n1, int n2)
{
	return n1*n2;
}
