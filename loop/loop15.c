#include<stdio.h>
int main()
{
	//prime or not
	int n,i,c=0;
	printf("Enter no.");
	scanf("%d",&n);
	
	for(i=2;i<=3;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==0 | n==2|n==3)
	printf("Prime");
	else
	printf("Not prime");
	return 0;
}
