//wap to compare 2 strings.
#include<stdio.h>
int mystrcmp(char s1[],char s2[]){
	int i=0;
	while(s1[i]!='\0'&&s2[i]!='\0'){
		if(s1[i]!=s2[i]){
			return (s1[i]-s2[i]);
		}
		i++;
	}
	return 0;
}
int main(){
	char s1[20],s2[20];
	puts("Enter first string:");
	gets(s1);
	puts("Enter second string:");
	gets(s2);
	if(mystrcmp(s1,s2)==0){
		puts("Same Strings.");
	}else{
		puts("Differrent Strings.");
	}
	return 0;
}
