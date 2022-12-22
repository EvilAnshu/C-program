/*
function : function is a set of instructions to perform any perticular task.
functions are of two types-
1. pre defined function or library function
2.user defined function

User defined function
1. function prototype
Syntax:
	return_type function_name(parameter_list);
2. function definition
float area(float r)
{
	float ar;
	ar=3.14*r*r;
	return (ar);
}
3. function call
function_name(parameter);

*/
// area of circle using function

#include<stdio.h>
float area(float);
float area(float r)
{
	float ar;
	ar=3.14*r*r;
	return(ar);
}
void main()
{
	float rad,a;
	printf("Enter Radius : ");
	scanf("%f",&rad);
	a=area(rad);
	printf("Area = %f",a);
	
}














