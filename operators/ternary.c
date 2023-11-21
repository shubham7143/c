//use of ternary operator.
#include<stdio.h>
int main(){
	int a,b,max;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
	max=(a>b)?a:b;
	printf("Max=%d",max);
	return 0;
}
