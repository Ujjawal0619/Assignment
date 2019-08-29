#include<stdio.h>
#include"../getint.h"

int main(){
	int num,i,sum=0;
	
	num=getint();
	
	for(i=1;i<num;i++)
		if(!(num%i))// ! precedence is higher than % 
			sum+=i;
			
	if(sum==num)
		printf("\nPrefect.");
	else
		printf("\nNot perfect.");
		
	return 0;
}
