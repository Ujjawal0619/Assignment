#include<stdio.h>

int main(){
	int i,j,k;
	
	for(i=4; i>=0; i--){ //4=n
		for(j=0; j<=i; j++)
			printf("%c",65+j);
		for(k=0; k<=i; k++)
			printf("%c",65+j-k-1);
		printf("\n");
	}
	return 0;
}
