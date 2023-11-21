//wap to check palindrome.
#include<stdio.h>
int main(){
	int num,n,sum=0,rem;
	puts("Enter number:");
	scanf("%d",&n);
	num=n;
	while(n){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(num==sum){
		puts("palindrome.");
	}else{
		puts("not palindrome.");
	}
	return 0;
}
