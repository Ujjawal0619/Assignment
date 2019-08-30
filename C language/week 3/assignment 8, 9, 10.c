#include<stdio.h>
int sum(int, int);
int product(int, int);
void swap(int*, int*);

int main(){
	int num1, num2;
	puts("Enter two number:\n");
	scanf("%d%d",&num1,&num2);
	printf("Sum is %d\n",sum(num1, num2));
	printf("Porduct is %d\n",product(num1, num2));
	printf("Before swapping A= %d, B= %d\n",num1, num2);
	swap(&num1, &num2);
	printf("After swapping A= %d, B= %d\n",num1, num2);
	return 0;
}

void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int sum(int x, int y){
	return x+y;
}

int product(int x, int y){
	return x*y;
}
