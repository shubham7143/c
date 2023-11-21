//wap to check armstrong.
#include<stdio.h>
#include<math.h>
int main(){
	int n,num,sum=0,rem;
	puts("Enter number:");
	scanf("%d",&n);
	num=n;
	while(n){
		rem=n%10;
		sum+=pow(rem,3);
		n=n/10;
	}
	if(num==sum){
		puts("Armstrong.");
	}else{
		puts("not Armstrong.");
	}
	return 0;
}
