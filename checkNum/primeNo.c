//wap to print prime in a given range.
#include<stdio.h>
int main(){
	int m,n,i,j,flag=1;
	puts("Enter range:");
	scanf("%d%d",&m,&n);
	if(m==1){
		m=m+1;
	}
	for(i=m;i<=n;i++){
		for(j=2;j<=i/2;j++){
			flag=1;
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag){
			printf("%d ",i);
		}
	}
	return 0;
}
