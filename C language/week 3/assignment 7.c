#include<stdio.h>
void isPrime(int);
void isArmstrong(int);

int main(){
	int num, rev;
	puts("Enter a number:\n");
	scanf("%d",&num);
	isPrime(num);
	isArmstrong(num);
	return 0;
}

void isPrime(int num){
	int i;
	for(i=2;i<num/2;i++){
		if(num/i)
			break;
	}
	if(i==num/2)
		printf("\n%d is PRIME.",num);
	else
		printf("\n%d is NOT PRIME.",num);
}

void isArmstrong(int num){
	int count=0, sum=0, onum, rem;
	onum=num;
	while(count++, num=num/10);
	num=onum;
	while(num){
		rem=num%10;
		sum+=pow(rem,count);
		num=num/10;
	}
	if(sum==onum)
		printf("\n%d is Armstron",onum);
	else
		printf("\n%d is not an Armstrong",onum);
	
}
