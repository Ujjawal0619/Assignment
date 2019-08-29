#include<stdio.h>

int main(){
	char string[20];
	puts("Enter a word:\n");
	gets(string);
	reverse(string, strlen(string),0);
	puts(string);
	return 0;
}

void reverse(char string[], int j, int i){
	char ch;
	if(i>=j)
		return;
	ch=string[i];
	string[i]=string[j-1];
	string[j-1]=ch;
	reverse(string, --j, ++i);
}
