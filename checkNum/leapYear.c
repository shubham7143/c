//wap to check leap year.
#include<stdio.h>
int main(){
	int year;
	puts("Enter year:");
	scanf("%d",&year);
	if(year%100){
		if(year%4){
			puts("not leap year.");
		} else {
			puts("leap year.");
		}
	} else {
		if(year%400){
			puts("not a leap year.");
		} else {
			puts("leap year.");
		}
	}
	return 0;
}
