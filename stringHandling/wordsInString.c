//wap to find no. of words in given string.
#include<stdio.h>
int main(){
	char str[100];
	int count=0,i;
	puts("Enter string:");
	gets(str);
	while(str[i]!='\0'){
		if(str[i]==' '){
			count++;
		}
		i++;
	}
	count++;
	printf("%d",count);
	return 0;
}
