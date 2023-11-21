#include<stdio.h>
int fact(int n){
	if(n==0)
	return 1;
	else 
	return n*fact(n-1);
}
int main(){
	int n,sum=0,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",fact(j));
			sum+=fact(i);
		}
	}
	printf("\n%d",sum);
	return 0;
}
