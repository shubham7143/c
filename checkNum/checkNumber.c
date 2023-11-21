//wap to check given number is prime or not.
#include<stdio.h>

int main(){
	int n,i,flag=0;
	puts("Enter number:");
	scanf("%d",&n);
	if(n==2){
		puts("prime number.");
	} else if(n%2==0){
		puts("not a prime number.");
	} else {
		for(i=3;i<=n/2;i++){
		if(n%i==0){
			flag=1;
		}
	}
	if(flag){
		puts("not a prime number.");
	} else {
		puts("prime number.");
	}
	}
	return 0;
}
