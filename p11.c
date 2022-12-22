//wap to find even or odd by using switch
#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	switch(n%2)
	{
		case 1:
			printf("Number is odd");
			break;
		case 0:
			printf("Number is even");
			break;
	}
}
