#include<stdio.h>
void even()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	
	if(n%2==0)
	printf("even");
	else
	printf("odd");
	
}
void main()
{
	even();
}
