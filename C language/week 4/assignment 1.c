#include<stdio.h>

int main(){
	int x,y;
	printf("Enter two numbers:\n");
	scanf("%d%d",&x,&y);
	printf("You have entered %d    %d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping %d    %d",x,y);
}
