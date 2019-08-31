#include<stdio.h>

int main(){
	int arr[20], i, n, max=0;
	printf("Enter the number of values:\n");
	scanf("%d",&n);
	printf("Enter %d values:\n",n);
	for(i=0; i<n; i++)
		scanf("%d",arr +i);
	rev(arr, n);
	printf("Reversed array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}

void rev(int arr[], int n){
	int i, temp;
	for(i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
}
