#include<stdio.h>

int main(){
	int arr[20], i, n, sum=0;
	printf("Enter the number of values:\n");
	scanf("%d",&n);
	printf("Enter %d values:\n",n);
	for(i=0; i<n; i++){
		scanf("%d",arr +i);
		sum+=arr[i];
	}
	printf("The sum of the elements in array is %d.",sum);
	return 0;
}
