#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,min;
	printf("How many values you want or enter?\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<n;i++){
		if(min>arr[i])
			min=arr[i];
	}
	printf("The smallest value of array is %d",min);
	return 0;
}
