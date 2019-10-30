#include <stdio.h>
#include <stdlib.h>

long factorial(long n)
{
	if (n <= 1)
		return 1;
	else
	{
		return (n*factorial(n - 1));
	}
}
int main(void)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%2d! = %d\n",i, factorial(i));
	}
	system("pause");
	return 0;
}