// wap to find out largest out of 4 by using conditional statement
#include<stdio.h>
void main()
{
	int n1,n2,n3,n4;
	printf("Enter 4 numbers : ");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	n1>n2?n1>n3? n1>n4?printf("n1 : %d is greater",n1):printf("n4 : %d is greater",n4)
	:
	n3>n4?printf("n3 : %d is greater",n3):printf("n4 : %d is greater",n4)
	:
	n2>n3? n2>n4?printf("n2 : %d is greater",n2):printf("n4 : %d is greater",n4)
	:
	n3>n4?printf("n3 : %d is greater",n3):printf("n4 : %d is greater",n4);	
}
