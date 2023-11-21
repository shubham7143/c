#include<stdio.h>
int cube()
{
	int n,cube;
	printf("Enter Number:");
	scanf("%d",&n);
	
	cube=n*n*n;
	
	printf("CUBE=%d",cube);
	return cube;
}
int main()
{
	printf("main started\n");
	cube();
	printf("\nmain ended");
	return 0;
}
