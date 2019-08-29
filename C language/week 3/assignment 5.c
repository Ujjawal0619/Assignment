#include<stdio.h>
char* mystrcat(char*, char*);
int mystrlen(char*);
char* toupperstr(char *);
char* tolowerstr(char *);
int isUpperstr(char *);
int islowerstr(char *);

int main(){
	char arr1[100]="Hello This is Ujjwal kuamr";
	char arr2[100]="form MANIT";
	char str1[100]="A";
	char str2[100]="Z";
	printf("%d\n",mystrlen(arr1));
	printf("%s\n",mystrcat(arr1,arr2));
	printf("%d\n",mystrcmp(str1, str2));
	printf("%s\n",toupperstr(arr2));
	printf("%s\n",tolowerstr(arr2));
	printf("%d\n",isUpperstr("MANIT IS"));
	printf("%d\n",islowerstr("ujjwal kumar"));
	return 0;
}
// 4.a
int mystrlen(char *s){
	int i;
	for(i=0;s[i]!='\0';i++);
	return i;
}
// 4.b
char* mystrcat(char* str1, char* str2){
	int i,j=0;
	for(i=0;str1[i]!='\0';i++);
	while(str1[i++]=str2[j++]);
	return str1;
}
// 4.c
int mystrcmp(char* str1, char* str2){
	int i=0;
	while(str1[i]==str2[i++])
		if(!str1[i-1])
		 return 0;
	return(str1[--i]-str2[i]);
}
// 4.d
char* toupperstr(char *s){
	int i;
	for(i=0;s[i];i++){
		if(s[i]>96 && s[i]<124)
			s[i]-=32;
	}
	return s;
}
// 4.e
char* tolowerstr(char *s){
	int i;
	for(i=0;s[i];i++){
		if(s[i]>64 && s[i]<91)
			s[i]+=32;
	}
	return s;
}
// 4.f
int isUpperstr(char *s){
	int i;
	for(i=0;s[i];i++)
		if(s[i]>96 && s[i]<124)
			return 0;
	return 1;
}
// 4.g
int islowerstr(char *s){
	int i;
	for(i=0;s[i];i++)
		if(s[i]>64 && s[i]<91)
			return 0;
	return 1;
}

