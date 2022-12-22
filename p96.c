//wap to input your old password, new password and confirm password print password change sucessfully
//if password and confirm password is same
//and new password does not match to old password
//and new password is greater than 8 character
//
//print new password should be differ from old password
//if new password and old password is same
//
//print new password and confirm password does not match
//if new password and confirm password is not same
#include<stdio.h>
#include<string.h>
void main()
{
	char opass[100],npass[100],cpass[100];
	printf("Enter Your Old Password : ");
	gets(opass);
	printf("Enter Your New Password : ");
	gets(npass);
	printf("Confirm Your New Password : ");
	gets(cpass);
	if(strcmp(npass,cpass)==0 && strcmp(opass,npass)!=0 && strlen(npass)>8)
	{
		printf("password change sucessfully...");
	}
	else if(strcmp(opass,npass)==0)
	{
		printf("new password should be differ from old password...");
	}
	else if(strcmp(npass,cpass)!=0)
	{
		printf("new password and confirm password does not match...");
	}
	else if(strlen(npass)<=8)
	{
		printf("new password should have more than 8 Character...");
	}
}

