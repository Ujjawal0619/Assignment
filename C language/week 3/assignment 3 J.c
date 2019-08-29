#include<stdio.h>

int main(){
	int i,j,k=1;
	
	for(i=0; i<=4; i++){
		for(j=0; j<=i; j++){
			if(k==1){
				printf("1");
				k=0;
			}
			else{
				printf("0");
				k=1;
			}
		}
			if(i&1)
				k=1;
			else
				k=0;	
		printf("\n");
	}
	return 0;
}
