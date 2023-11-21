#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(int argc, char const *argv[])
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("record.txt","r");
    fp2=fopen("copy.txt","w");
    if(fp1==NULL||fp2==NULL){
        printf("File couldn't be open.");
        exit(0);
    }
    while(!feof(fp1)){
        ch=fgetc(fp1);
        if(ch!=EOF){
            fputc(ch,fp2);
        }
    }
    printf("File copied sucessfully.");
    fclose(fp1);
    fclose(fp2);
    printf("\n\ncontent of copy.txt...\n");
    fp2=fopen("copy.txt","r");
    while((ch=getc(fp2))!=EOF){
        printf("%c",ch);
        sleep(1);
    }
    fclose(fp2);
    return 0;
}
