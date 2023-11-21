#include<stdio.h>
void prime()
{
	int j,i,c=0;
	
	for(j=1;j<=100;j++)
	{
		c=0;
		for(i=2;i<=j/2;i++)
		{
			if(j%i==0)
			c++;
		}
		if(c==0)
		printf("%d ",j);
	}
}
void main()
{
	prime();
}
