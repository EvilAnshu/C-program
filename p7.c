#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter 3 Numbers : ");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	printf("n1 : %d is greater",n1);
	else if(n2>n3 && n2>n1)
	printf("n2 : %d is greater",n2);
	else if(n3>n1 && n3>n2)
	printf("n3 : %d is greater",n3);
	else
	printf("please do not enter equal numbers");
}
