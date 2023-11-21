#include<stdio.h>
int main()
{
	//pattern 8
	int i,j,n,k,c=1;
	printf("Enter rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",c++);
		printf("\n");
	}
	return 0;
}
