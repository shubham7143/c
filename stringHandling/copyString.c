//wap to copy the string.
#include<stdio.h>
void myStrCpy(char str1[],char str2[]){
	int i=0;
	while(str1[i]!='\0'){
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
}
int main(){
	char str1[20],str2[20];
	puts("Enter String:");
	gets(str1);
	myStrCpy(str1,str2);
	puts(str2);
	return 0;
}
