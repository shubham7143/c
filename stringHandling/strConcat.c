//wap to concatenate the string.
#include<stdio.h>
void mystrconcat(char s1[],char s2[]){
	int i=0,j;
	while(s1[i]!='\0'){
		i++;
	}
	j=0;
	while(s2[j]!='\0'){
		s1[i]=s2[j];
		i++;j++;
	}
	s1[i]='\0';
}
int main(){
	char s1[40],s2[20];
	puts("Enter string:");
	gets(s1);
	puts("Enter another string:");
	gets(s2);
	printf("Before concatenation s1:%s",s1);
	mystrconcat(s1,s2);
	printf("\nAfter concatenation s1:%s",s1);
	return 0;
}
