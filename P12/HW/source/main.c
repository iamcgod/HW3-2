#include <stdio.h>
#include <stdlib.h>

int square(int);

int main(void)
{
	int x;
	for (x = 1; x <=10; x++)
	{
		printf("%d ", squre(x));
	}
	printf("\n");
	system("pause");
	return 0;
}
int squre(int y)
{
	return y * y;
}