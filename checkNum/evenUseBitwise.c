//wap to find wheter a given number is even or odd using bitwise operator.
#include<stdio.h>
int main(){
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if(num&1){
		printf("Odd.");
	}else{
		printf("Even.");
	}
	return 0;
}
