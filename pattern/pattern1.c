#include<stdio.h>
int main()
{
	//pattern 1
	int i,j,n;
	printf("Enter rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}
