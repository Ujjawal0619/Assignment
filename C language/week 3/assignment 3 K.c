#include<stdio.h>

int main(){
	int i,j;
	
	for(i=0; i<=2; i++){	// 2=n
		for(j=0; j<=i; j++)
			printf("%c",65+j);
		printf("\n");
	}
	//printf("\n");
	for(i--;i>0;i--){
		for(j=0;j<i;j++)
			printf("%c",65+j);
		printf("\n");
	}
	return 0;
}
