//wap to input your techpile userid and password and print welcome to techpile.
//if userid starts with techpileapp22 and password is tech123
#include<stdio.h>
#include<string.h>
void main()
{
	char user[100],pass[100];
	printf("Enter Your Userid : ");
	gets(user);
	printf("Enter Your Password : ");
	gets(pass);
	if(strncmp(user,"techpileapp22",13)==0 && strncmp(pass,"tech123",7)==0)
	{
		printf("Welcome to Techpile");
	}
	else
	{
		printf("Wrong User id or password ");
	}
}

