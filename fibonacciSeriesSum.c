// fibonacci series  & sum.
#include <stdio.h>
int fib(int);
int main()
{
	int n, i, sum = 0;
	puts("Enter nth term:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", fib(i));
		sum = sum + fib(i);
	}
	printf("\nsum of series = %d", sum);
	return 0;
}
int fib(int n)
{
	if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
