//palindrome string.
#include<stdio.h>
int main(){
	char str[100],rev[100];
	puts("Enter string");
	gets(str);
	strcpy(rev,str);
	strrev(rev);
	if(strcmp(str,rev)==0){
		puts("Palindrome");
	}else{
		puts("not Palindrome.");
	}
	return 0;
}
