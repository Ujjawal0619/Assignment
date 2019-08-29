#include<stdio.h>
#include<math.h>
#include"../getint.h"

int main()
{
	int num,oNum,rem,ind,sum=0;
	num=getint();
	oNum=num;
	for(ind=0;num!=0;num/=10, ind++);
	num=oNum;
	//printf("\n%d",ind);
	
	do{
		rem = num%10;
		sum = sum + pow(rem,ind);
		num /= 10;
	}while(num);
	
	if(sum == oNum)
		printf("\nAramstrong.");
	else
		printf("\nNot armstrong.");
	return 0;
}
