// factorial using loop & recursion.
#include <stdio.h>
int factorial(int);
int main()
{
	int n, i, fact = 1;
	puts("Enter number:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		fact *= i;
	}
	printf("By loop:\n%d!=%d", n, fact);
	printf("\nBy recursion:\n%d!=%d", n, factorial(n));
	return 0;
}
int factorial(int n)
{
	if (n == 1)
	{
		return n;
	}
	else
	{
		return n * factorial(n - 1);
	}
}
