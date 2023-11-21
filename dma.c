#include<stdio.h>
int main(int argc, char const *argv[])
{
    int *ptr;
    int n1,n2,sum=0,i;
    float avg;
    printf("Enter no. of records:");
    scanf("%d",&n1);
    ptr=(int*)calloc(n1,sizeof(int));
    //fill records.
    printf("Enter records:");
    for(i=0;i<n1;i++){
        scanf("%d",(ptr+i));
    }
    printf("How many more records you want to store:");
    scanf("%d",&n2);
    ptr=realloc(ptr,(n1+n2)*sizeof(int));
    for ( i = 0; i <n2 ; i++)
    {
        scanf("%d",(ptr+n1+i));
    }
    printf("\nEntered marks after realloc:");
    for(i=0;i<n1+n2;i++){
        printf("%d ",*(ptr+i));
        sum+=*(ptr+i);
    }
    avg=(float)sum/(n1+n2);
    printf("\n Average marks=%.2f",avg);
    free(ptr);
    return 0;
}
