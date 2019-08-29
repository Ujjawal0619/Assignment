#include<stdio.h>

int main(){
	int i,j;
	
	for(i=4; i>=0; i--){
		for(j=0; j<=i; j++)
		if(!(i&1))
			printf("*");
		else
			printf("0");
			
		printf("\n");
	}
	return 0;
}
