#include<stdio.h>
void lcm()
{
	//LCM of two numbers
	int a,b,max;
	printf("Enter number:");
	scanf("%d%d",&a,&b);
	
	max=(a>b)?a:b;
	while(max%a>=0 && max%b>=0)
	{
		if(max%a==0 && max%b==0)
		{
			printf("LCM=%d",max);
			break;
		}
		max++;
	}
}
void main(){
	lcm();
}
