#include<stdio.h>
int main()
{
	//to check armstrong number
	int on,n,rem,sum=0;
	printf("Enter number:");
	scanf("%d",&on);
	n=on;
	
	while(n!=0)
	{
		rem=n%10;
		sum+=rem*rem*rem;
		n=n/10;
	}
	printf("%d\n",sum);
	if(sum==on)
	printf("armstrong no.");
	else
	printf("not a armstrong no.");
	
	return 0;
}
