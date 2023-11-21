#include<stdio.h>
typedef struct students     //defining the structure.
{
    int rollno;
    char name[20];
    char branch[10];
    int marks;
}std;
int main(int argc, char const *argv[])
{
    std a[15];
    int i,n,max,index;
    float avg,sum=0;
    printf("Enter no. of records:");
    scanf("%d",&n);
    //Reading data from user.
    for(i=0;i<n;i++){
        printf("\nEnter information of %d student:",i+1);
        printf("\nEnter roll no.:");
        scanf("%d",&a[i].rollno);
        fflush(stdin);
        printf("\nEnter name:");
        gets(a[i].name);
        printf("\nEnter branch:");
        gets(a[i].branch);
        printf("\nEnter marks:");
        scanf("%d",&a[i].marks);
    }
    //find topper.
    max=a[0].marks;
    index=0;
    for(i=0;i<n;i++){
        if(a[i].marks>max){
            max=a[i].marks;
            index=i;
        }
        sum=sum+a[i].marks;
    }
    avg=sum/n;
    printf("\nAvg. marks=%.2f",avg);
    printf("\nTopper student:\n\tRoll no.:%d\n\tName:%s\n\tBranch:%s\n\tMarks:%d",a[index].rollno,a[index].name,a[index].branch,a[index].marks);
    return 0;
}
