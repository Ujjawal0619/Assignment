#include<stdio.h>

int main(){
	int arr[20], i, n, max=0;
	printf("Enter the number of values:\n");
	scanf("%d",&n);
	printf("Enter %d values:\n",n);
	scanf("%d",arr);
	max=arr[0];
	for(i=1; i<n; i++){
		scanf("%d",arr +i);
		if(max<arr[i]);
			max=arr[i];
	}
	printf("The maximum of the elements in array is %d.",max);
	return 0;
}
