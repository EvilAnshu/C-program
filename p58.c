//wap to input 2 numbers and print addition untill user press 1
#include<stdio.h>
void main()
{
	int n1,n2,ch;
	add:
	printf("Enter Two Numbers : ");
	scanf("%d%d",&n1,&n2);
	printf("Addition : %d\n",n1+n2);
	printf("Do You Want to continue? press 1 for yes , press 2 for No : ");
	scanf("%d",&ch);
	if(ch==1)
		goto add;
	else
		goto end;
	end:
		printf("Thank You...");
}
