#include<stdio.h>
int main()
{
	//wap to find sum of n natural numbers
	int i,n,sum=0;
	printf("Enter value of N:");
	scanf("%d",&n);
	i=1;
	find:
		sum=sum+i;
		i++;
		if(i<=n)
			goto find;
		printf("Sum of %d natural numbers = %d",n,sum);
}
