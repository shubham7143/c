#include<stdio.h>
void table()
{
	int n,i;
	printf("Enter Number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",n,i,n*i);
	}
}
void main()
{
	table();
}
