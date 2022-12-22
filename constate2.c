//wap to input your 5 subject marks and find percentage if all marks is within (1-100)
#include<stdio.h>
void main()
{
	int a, b, c, d, e;
	printf("Enter Numer Of Five subject");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>0 && a<=100 && b>0 && b<=100 && c>0 && c<=100 && d>0 && d<=100 && e>0 && e<=100)
	{
		printf("Your percentage : %f ",(a+b+c+d+e)/5.0);
	}
	else
	{
		printf("Enter valid Numbers...");
	}
}
