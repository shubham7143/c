#include<stdio.h>
int main()
{
	//check prime
	int i,n,c=0;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			c++;
			break;
		}
	}
	if(c==0){
		printf("%d is a prime.",n);
	}
	else 
		printf("%d is not a prime.",n);
	return 0;
}
