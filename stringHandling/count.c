//wap to find no. of words,vowels,consonants & special symbols in a given string.
#include<stdio.h>
int main(){
	char s[100];
	int i,space=0,vowel=0,cons=0,digit=0,sp=0;
	puts("Enter the string:");
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]==' '){
			space++;
		}else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
				vowel++;
			}else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
				vowel++;
			}else{
				cons++;
			}
		}else if(s[i]>='0'&&s[i]<='9'){
			digit++;
		}else{
			sp++;
		}
	}
	printf("\nNo. of words=%d",space+1);
	printf("\nNo. of vowels=%d",vowel);
	printf("\nNo. of consonants=%d",cons);
	printf("\nNo. of digits=%d",digit);
	printf("\nNo. of special symbols=%d",sp);
	return 0;
}
