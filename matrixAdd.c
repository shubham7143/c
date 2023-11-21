//wap of matrix addition.
#include<stdio.h>
int main(){
	int mat[3][3],a[3][3],b[3][3],i,j;
	puts("Enter first matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d ",a[i][j]);
		}
	}
	puts("Enter second matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d ",b[i][j]);
		}
	}
	//logic for addition...
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j]=a[i][j]+b[i][j];
		}
	}
	//print the matrix...
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
