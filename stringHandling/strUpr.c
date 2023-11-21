//wap to convert string in uppper case.
#include<stdio.h>
void mystrupr(char str[]){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]=str[i]-32;
		}
		i++;
	}
}
int main(){
	char str[100];
	puts("Enter String:");
	gets(str);
	mystrupr(str);
	puts(str);
	return 0;
}
