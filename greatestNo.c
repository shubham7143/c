#include<stdio.h>
int main()
{
	//largest among 3 numbers
	int a,b,c;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		printf("%d is greatest.",a);
	else if(b>c&&b>a)
		printf("%d is greatest.",b);
	else if(c>a&&c>b)
		printf("%d is greatest.",c);
	return 0;
}
