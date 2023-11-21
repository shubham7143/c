#include <stdio.h>
int main()
{
	// fibonacci series
	int n, a = 0, b = 1, next, i;
	printf("Enter value of n :");
	scanf("%d", &n);
	printf("fibonacci series : ");
	for (i = 1; i <= n; i++)
	{
		if (i == 1)
			printf("%d ", a);
		else if (i == 2)
			printf("%d ", b);
		else
		{
			next = a + b;
			printf("%d ", next);
			a = b;
			b = next;
		}
	}
	return 0;
}
