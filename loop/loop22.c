#include<stdio.h>
int main()
{
	int a,b,c,i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("*");
		printf("\n");
	}
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=a;b++)
		printf(" ");
		for(c=1;c<=5-a;c++)
		printf("*");
		printf("\n");
	}
	return 0;
}
