//wap to input 2 numbers and perform arithmatic operation.
/*
ask user for choice
1= addition
2= substraction
3= multiplication
4= division
5= modular division
*/
#include<stdio.h>
void main()
{
	int n1,n2,ch;
	printf("Enter your choice : (1= add 2= subtract 3= multiply 4= divide 5= modular)");
	scanf("%d",&ch);
	printf("Enter 2 numbers : ");
	scanf("%d%d",&n1,&n2);
	if(ch==1)
	printf("addition : %d",n1+n2);\
	else if(ch==2)
	printf("subtraction : %d",n1-n2);
	else if(ch==3)
	printf("multiplication : %d",n1*n2);
	else if(ch==4)
	printf("devision : %d",n1/n2);
	else if(ch==5)
	printf("Modular division : %d",n1%n2);
	else
	printf("Enter a valid choice");
}
