#include<stdio.h>
int main()
{
	//print even number series
	int a,n;
	printf("enter last term of a series:");
	scanf("%d",&n);
	
	for(a=2;a<=n;a+=2)
	printf("%d\t",a);
	return 0;
}
