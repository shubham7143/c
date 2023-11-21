//wap to understand operators...
#include<stdio.h>
int main(){
	int a=10;
	printf("Initial value is 10.\n");
	//increment operator.
		//post
		printf("post increment=%d\n",a++);
		//pre
		a=10;
		printf("pre increment=%d\n",++a);
	//decrement operator.
	a=10;
		//post
		printf("post decrement=%d\n",a--);
		//pre
		a=10;
		printf("pre decrement=%d\n",--a);
	return 0;
}
