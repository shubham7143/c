#include<stdio.h>
int main()
{
	//pattern 11
	int i,j,n,k,t;
	printf("Enter rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(t=i-1;t>=1;t--)
			printf("%d",t);
		printf("\n");
	}
	return 0;
}
