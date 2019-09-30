/*program to find HCF of given two numbers*/
#include<stdio.h>

int main(){
	int num1, num2, i;
	printf("Enter two number\n");
	scanf("%d%d",&num1, &num2);
	
	for(i=num1<num2?num1:num2;i>0;i--)
		if(!(num1%i) && !(num2%i))
			break;
	
	printf("HCF of %d, %d is %d",num1, num2, i);
	
	return 0;
}
