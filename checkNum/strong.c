#include<stdio.h>
int main()
{
	//to print all strong number between 1 to 1000
	int a,n,rem,b,fact=1,sum=0;
	
	for(a=1;a<=1000;a++)
	{
		sum=0;
		n=a;
	    while(n!=0)
	 	{
	 		fact=1;
			rem=n%10;
			n=n/10;
			for(b=1;b<=rem;b++)
				{
				fact=fact*b;
				}
			sum+=fact;
		}
		if(sum==a)
		printf("%d\t",a);
	}
	return 0;
}
