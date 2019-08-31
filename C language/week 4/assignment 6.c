#include<stdio.h>

int main(){
	int arr[20], i, n, min=0;
	printf("Enter the number of values:\n");
	scanf("%d",&n);
	printf("Enter %d values:\n",n);
	scanf("%d",arr);
	min=arr[0];
	for(i=1; i<n; i++){
		scanf("%d",arr +i);
		if(min>arr[i]);
			min=arr[i];
	}
	printf("The minimum of the elements in array is %d.",min);
	return 0;
}
