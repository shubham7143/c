//wap to find the length of string.
#include<stdio.h>
int mystrlen(char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}
int main(){
	int len;
	char str[100];
	puts("Enter the string:");
	gets(str);
	len=mystrlen(str);
	printf("Length of string:%d",len);
	return 0;
}
