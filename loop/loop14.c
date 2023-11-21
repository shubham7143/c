#include<stdio.h>
int main()
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
	return 0;
}
