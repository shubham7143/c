#include<stdio.h>
int max()
{
	int n1,n2,max,min;
	printf("Enter numbers:");
	scanf("%d%d",&n1,&n2);
	
	if(n1>n2)
	{
		printf("max=%d\nmin=%d",n1,n2);
	}
	else
	{
		printf("max=%d\nmin=%d",n2,n1);
	}
	return 1;
}
int main()
{
	max();
}
