/* Program to find max of an given array*/
#include<stdio.h>

int input(int *values, int n){
	int i, max;
	printf("Enter %d elements:\n",n);
	scanf("%d", values);
	max=*values;
	for(i=1;i<n;i++){
		scanf("%d",values +i);
		if(max<*(values + i))
			max=*(values + i);
	}
	return max;
}

void display(int *values, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",*(values +i));
	}
}

int main(){
	int i, arr[100], n, max;
	printf("Enter the no of elements:\n");
	scanf("%d", &n);
	max=input(arr, n);
	display(arr, n);
	printf("\nMaximum is %d", max);	
	return 0;
}
