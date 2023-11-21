#include<stdio.h>
int fact(int n)
{
	if(n==1){
		return 1;
	}
	else
	return n*fact(n-1);
}
int ncr(int n,int r)
{
	int ncr=fact(n)/(fact(r)*fact(n-r));
	return ncr;
}
int main()
{
	int r,i,j,k;
	printf("Enter no. of rows :");
	scanf("%d",&r);
	for(i=1;i<=r;i++){
		for(j=0;j<r-i;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("%d",ncr(i,k));
	}
	
	return 0;
}
