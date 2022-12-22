//wap to check whether given alphabet is vowel or consonent
#include<stdio.h>
void main()
{
	char a;
	printf("Enter an alphabate : ");
	scanf("%c",&a);
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
		printf("%c is a Vowel..",a);
	else
		printf("%c is a consonent..",a);
}
