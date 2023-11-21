//wap to find transpose of a matrix.
#include<stdio.h>
int main(){
	int a[10][10],b[10][10];
	int i,j,n;
	printf("Enter the order of sq. matrix:");
	scanf("%d",&n);
	///taking matrix from user.
	printf("Enter the matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	//logic for transpose of a matrix.
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[j][i];
		}
	}
	//print the transpose matrix.
	printf("Transppose of matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
