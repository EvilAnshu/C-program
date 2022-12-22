#include<stdio.h>
void main()
{
	int n1,n2;
	printf("Enter two numbers : ");
	scanf("%d%d",&n1,&n2);
	if(n1!=0 && n2!=0)
		printf("Result is : %d",n1*n2);
	else
		printf("zero are not accepted");
}
