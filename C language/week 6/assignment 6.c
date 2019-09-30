/*program that add first 100 odd and even numbers*/
#include<stdio.h>

int main(){
	int oddsum=0, evensum=0, i;
	
	for(i=0;i<200;i++)
		if(i&1)
			oddsum+=i;
		else
			evensum+=i;
		printf("sum of first odd and even whole numbers is %d and %d", oddsum, evensum);
	return 0;
}
