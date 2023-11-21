//reverse the string.
#include<stdio.h>
void myStrRev(char str[]){
	int i,j;
	char temp;
	//place j at end of string...
	j=0;
	while(str[j]!='\0'){
		j++;
	}
	j--;
	i=0;
	//now swap...
	while(i<j){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;j--;
	}
}
int main(){
	char str[100];
	puts("Enter the string");
	gets(str);
	myStrRev(str);
	puts(str);
	return 0;
}
