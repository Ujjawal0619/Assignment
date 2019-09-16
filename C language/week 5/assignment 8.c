/*two number add by reference*/
#include<stdio.h>

void sum(int *x, int *y, int *z){
	*z=*x + *y;
}

int main(){
	int p, q, r;
	printf("Enter two numbers:\n");
	scanf("%d%d", &p, &q);
	sum(&p, &q, &r);
	printf("sum is %d",r);
	return 0;
}
