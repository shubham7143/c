#include<stdio.h>
void factorial();
int main()
{
	printf("main started...\n");
	factorial();
	printf("\nmain ended...");
	return 0;
}
void factorial()
{
	int num,fact=1,i;
	printf("Enter number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	fact*=i;
	printf("factorial=%d",fact);
	
}
