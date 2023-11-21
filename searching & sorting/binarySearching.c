//binary search.
#include<stdio.h>
int main(){
	int n,a[100],key,i,j,beg,mid,end,flag=1;
	puts("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//bubble sort...
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//key i/p...
	puts("Enter key:");
	scanf("%d",&key);
	//binary searching...
	beg=0;
	end=n-1;
	while(beg<=end){
		mid=(beg+end)/2;
		if(a[mid]==key){
			printf("key found at index=%d",mid);
			flag=0;
			break;
		}else if(a[mid]>key){
			//left search...
			end=mid-1;
		}else{
			//right search...
			beg=mid+1;
		}
	}
	if(flag){
		puts("key doesn't exist.");
	}
	return 0;
}
