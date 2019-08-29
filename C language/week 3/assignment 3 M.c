#include<stdio.h>

int main(){
	int i,j,n=3;
	
	for(i=0; i<n; i++){ //use n to genralise
		for(j=0; j<=2*n-1; j++)
			if(j>=n-1-i && j<=n-1+i)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
	return 0;
} 
