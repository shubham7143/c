#include<stdio.h>
int main()
{
	//pattern 6
	int i,j,n,k;
	printf("Enter rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%c",64+j);
		printf("\n");
	}
	return 0;
}
