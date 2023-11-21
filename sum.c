//wap to print sum of digits of a number.
#include<stdio.h>
int main(){
	int num,sum,rem;
	printf("Enter number:");
	scanf("%d",&num);
	while(num){
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("Sum of digits=%d",sum);
	return 0;
}
