//wap to input a string and check how many vowels are present in string
	// techpile : 3 times
#include<stdio.h>
#include<string.h>
void main()
{
	char ar[100];
	int i,count=0;
	printf("Enter A String : ");
	gets(ar);
	for(i=0;i<strlen(ar);i++)
	{
		if(ar[i]=='a'|| ar[i]=='e'|| ar[i]=='i'|| ar[i]=='o'|| ar[i]=='u'|| ar[i]=='A'|| ar[i]=='E'|| ar[i]=='I'|| ar[i]=='O'|| ar[i]=='U')
		{
			count++;
		}
	}
	printf("%d vowels present in array..",count);
}
