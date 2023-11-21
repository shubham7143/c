//wap to store name of n students in lexographical order.
#include<stdio.h>
int main(){
	char a[50][20];
	char temp[20];
	int i,j,n;
	puts("Enter no. of strings:");
	scanf("%d",&n);
	fflush(stdin);
	//Enter names.
	for(i=0;i<n;i++){
		puts("Enter name:");
		gets(a[i]);
	}
	//apply bubble sort.
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-i-1;j++){
			if(strcmpi(a[j],a[j+1])>0){
				//swap strings.
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	//Print all sorted names...
	printf("Names in lexographical order:\n");
	for(i=0;i<n;i++){
		puts(a[i]);
	}
	return 0;
}
