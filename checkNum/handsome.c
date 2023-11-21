#include<stdio.h>
int main()
{
	// to check a number is handsome or not
	int n,ld,rem,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	
	ld=n%10;
	n=n/10;
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	if(sum==ld)
	printf("handsome number");
	else 
	printf("not a handsome number");
	
	return 0;
}
