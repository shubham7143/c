#include<stdio.h>
int main()
{
    //reverse of a number
	int n,rem;
	printf("enter number:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		printf("%d",rem);
	}
	return 0;
}
