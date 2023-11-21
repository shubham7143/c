#include <stdio.h>
int main()
{
	// to print factorial of all number b/w 1&N that are divisible by 3
	int a, b, n, fact = 1;
	printf("Enter last term:");
	scanf("%d", &n);

	for (a = 1; a <= n; a++)
	{
		fact = 1;
		if (a % 3 == 0)
		{
			for (b = 1; b <= a; b++)
			{

				fact *= b;
			}
			printf("factorial of a %d is %d\n", a, fact);
		}
	}
	return 0;
}
