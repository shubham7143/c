//wap for matrix multiplication.
#include<stdio.h>
int main(){
	int a[20][20],b[20][20],c[20][20];
	int i,j,k,sum,r1,r2,c1,c2;
	printf("Enter the order of first matrix:");
	scanf("%d %d",&r1,&c1);
	printf("Enter the order of second matrix:");
	scanf("%d %d",&r2,&c2);
	//checking multiplication possible or not.
	if(c1!=r2){
		printf("Matrix multiplication is'nt possible.");
		exit(0);
	}
	//taking matrix from user.
	printf("Enter first matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second matrix:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	//matrix multiplication logic.
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			sum=0;
			for(k=0;k<c2;k++){
				sum+=a[i][k]+b[k][j];
			}
			c[i][j]=sum;
		}
	}
	//printing the matrix.
	printf("Resultant Matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
