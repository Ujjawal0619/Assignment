#include<stdio.h>

int main(){
	int arr[100],i,n;
	printf("Enter number of elements.\n");
	scanf("%d",&n);
	inputArray(arr,n);
	displayArray(arr,n);
	reverseArray(arr,n);
	displayArray(arr,n);
	return 0;
}

void inputArray(int arr[], int n){
	int i;
	printf("Enter %d values in array.\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}

void reverseArray(int arr[], int n){
	int i;
	for(i=0;i<n/2;i++){
	arr[i]=arr[i]+arr[n-1-i];
	arr[n-1-i]=arr[i]-arr[n-1-i];
	arr[i]=arr[i]-arr[n-1-i];
	}
}

void displayArray(int arr[], int n){
	int i;
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
