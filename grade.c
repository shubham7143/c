#include<stdio.h>
int main()
{
	//grade of student
	int marks,index;
	printf("Enter marks of student:");
	scanf("%d",&marks);
	if(marks>=0&&marks<=100){
		index=marks/10;
		switch(index){
			case 10:
			case 9:
			case 8:
				printf("Grade A");
				break;
			case 7:
			case 6:
				printf("Grade B");
				break;
			case 5:
				printf("Grade C");
				break;
			case 4:
			case 3:
			case 2:
			case 1:
				printf("Fail");
		}
	}
	else 
		printf("Invalid Marks.");
	return 0;
}
