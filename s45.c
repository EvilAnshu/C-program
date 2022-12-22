//fibonacci series using recursive function
#include <stdio.h>
int fibonacci(int i)
{
	if(i == 1)
	{
		return 0;
	}
	if(i == 2)
	{
		return 1;
	}
	return fibonacci(i-1) + fibonacci(i-2);
}

int  main()
{
   int i;	
   for (i = 1; i <= 10; i++) 
   {
      printf("%d\t", fibonacci(i));
   }	
   return 0;
}
