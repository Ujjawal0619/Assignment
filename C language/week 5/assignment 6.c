/*program to reverse an array*/
#include<stdio.h>

void input(int *values, int n){
	int i;
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",values +i);
	}
}

void display(int *values, int n){
	int i;
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",*(values +i));
	}
}

void reverse(int arr[], int n){
	int i, temp;
	n--;
	for(i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i];
		arr[n-i]=temp;
	}
}

int main(){
	int i, arr[100], n;
	printf("Enter the no of elements:\n");
	scanf("%d", &n);
	input(arr, n);
	display(arr, n);
	reverse(arr, n);
	display(arr, n);
	return 0;
}
