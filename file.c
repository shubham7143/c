#include<stdio.h>
int main(){
	FILE fp;
	fp=fopens("w","file.txt");
	fputs("abc",fp);
	fclose(fp);
	return 0;
}
