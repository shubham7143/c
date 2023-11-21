#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[20],branch[10];
    int rollno,marks,n,i;
    FILE *fp;
    fp=fopen("student.txt","w");        //open file in write mode.
    printf("Enter no. of students:");
    scanf("%d",&n);
    //I/P the record & save to file...
    //fprintf(fp,"no.\tRollno\t\tName\t\tBranch\t\tMarks\n");
    for(i=0;i<n;i++){
        printf("Enter rollno.:");
        scanf("%d",&rollno);
        fflush(stdin);
        printf("Enter name:");
        gets(name);
        printf("Enter branch:");
        gets(branch);
        printf("Enter marks:");
        scanf("%d",&marks);
        fprintf(fp,"%d\t%d\t\t%s\t\t%s\t\t%d\n",i,rollno,name,branch,marks);
    }
    printf("Record Saved sucessfully.");
    fclose(fp);
    return 0;
}
