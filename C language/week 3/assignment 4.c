#include<stdio.h>

int main(){
	int i;
	char arr[100];
	
	printf("Enter a phrase:\n");
	gets(arr);
	isPalindrome(arr);
	return 0;
} 

void isPalindrome(char arr[]){
	int i,len;
	len=strlen(arr);
	for(i=0; i<len/2; i++)
		if(arr[i]!=arr[len-i-1])
			break;
	if(i==len/2)
		printf("%s is palindrome.",arr);
	else
		printf("%s is not palindrome",arr);
}
