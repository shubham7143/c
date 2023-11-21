#include<stdio.h>
void swap(int *a,int *b){
	int temp= *a;
	*a = *b;
	*b = temp;
	
}
void bubbleSort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
			}
		}
	}
}
int main(){
	int a[100],n,i;
	printf("Enter no. of elements");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubbleSort(a,n);					//passing array
	printf("Sorted array:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
