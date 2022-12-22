/*wap to input total shoping amount and calculate your bill
shopping amount >= 5000 : discount 10%
otherwise : discount 5%
*/
#include<stdio.h>
void main()
{
	int a;
	printf("Enter total shoping amount : ");
	scanf("%d",&a);
	printf("You Need to pay %d rupees",a>=5000?a-(a*10/100):a-(a*5/100));
}
