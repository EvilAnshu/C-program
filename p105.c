//wap  to swap value of variable by using call by reference
#include<stdio.h>
void swap(int *n1,int *n2);
void swap(int *n1,int *n2)
{
	*n1= *n1+ *n2;
	*n2= *n1- *n2;
	*n1= *n1- *n2;
	printf("1st value : %d and second value : %d",*n1,*n2);
}
void main()
{
	int a,b;
	printf("Enter two Nmbers : ");
	scanf("%d%d",&a,&b);
	swap(&a,&b); 			// call by reference
	printf("\na value : %d and b value : %d",a,b);
}
