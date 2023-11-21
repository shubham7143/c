// wap to find sum of array elements using pointer.
#include<stdio.h>
int main(){
	int a[100],n,i,*ptr;
	printf("Enter n:");
	scanf("%d",&n);
	puts("Enter array elements:");
	ptr=a;
	for(i=-0;i<n;i++){
		scanf("%d",ptr);
		ptr++;
	}
	//find sum of array.
	int sum=0;
	ptr=a;
	for(i=0;i<n;i++){
		sum=sum+*(ptr+i);
	}
	printf("Sum=%d",sum);
	return 0;
}
