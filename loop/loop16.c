#include<stdio.h>
int main()
{
	int n,c,i,j;
	scanf("%d",&n);
	
	for(j=2;j<=n;j++)
	{
		c=0;
		for(i=2;i<=4;i++)
		{
			if(j%i==0)
			c++;
		}
		if(c==0|j==2|j==3)
		printf("%d\t",j);
	}
	return 0;
}
