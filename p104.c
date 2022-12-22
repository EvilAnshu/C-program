//wap to create a udf to swap 2 numbers
void swap(int n1,int n2);
void swap(int n1,int n2)
{
	int t;
	t=n1;
	n1=n2;
	n2=t;
	printf("after swapping n1=%d and n2=%d",n1,n2);
}
void main()
{
	int a,b;
	printf("Enter two Numbers : ");
	scanf("%d%d",&a,&b);
	printf("before swapping firset value = %d and second = %d",a,b);
	swap(a,b);		//call by value(when copy of values is passed asqctual value)
}
