#include<stdio.h>
int main()
{
	int a,n;
	printf("Enter last term of the series:");
	scanf("%d",&n);
	
	for(a=1;a<=n;a+=2)
	printf("%d\t",a);
	
	return 0;
}
