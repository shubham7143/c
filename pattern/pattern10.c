#include<stdio.h>
int main()
{
	//pattern 10
	int i,j,n,k;
	printf("Enter rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
