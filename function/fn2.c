#include<stdio.h>
int circle()
{
	int dia,area,radii,circumference;
	printf("enter radii");
	scanf("%d",&radii);
	
	dia=radii/2;
	circumference=2*3.14*radii;
	area=3.14*radii*radii;
	printf("%d %d %d",dia,circumference,area);
}
int main()
{
	circle();
}
