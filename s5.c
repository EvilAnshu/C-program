//wap to check whether given alphabet is vowel or consonent
#include<stdio.h>
void main()
{
	char a;
	printf("Enter an alphabate : ");
	scanf("%c",&a);
	switch(a)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("%c is a Vowel..",a);
			break;
		
		default:
			printf("%c is a consonent..",a);
	}
}
