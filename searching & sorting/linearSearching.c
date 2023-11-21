//linear searching.
#include<stdio.h>
int main(){
	int n,a[100],key,i,flag=1;
	puts("Enter number of elements:");
	scanf("%d",&n);
	puts("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	puts("Enter key:");
	scanf("%d",&key);
	//logic for linear search...
	for(i=0;i<n;i++){
		if(a[i]==key){
			printf("Key %d found at index:%d",key,i);
			flag=0;
			break;
		}
	}
	if(flag){
		puts("key doesn't exist.");
	}
	return 0;
}
