#include<stdio.h>
void input(int [], int);
void merg(int[], int[], int , int , int[]);
int main(){
	int arr1[20], arr2[20], arr[40], i, n1, n2;
	printf("Enter the number of values for array1 and array2:\n");
	scanf("%d%d",&n1, &n2);
	input(arr1, n1);
	input(arr2, n2);
	merg(arr1, arr2, n1, n2, arr);
	printf("Merged array is:\n");
	for(i=0;i<n1+n2;i++)
		printf("%d ",arr[i]);
	return 0;
}

void input(int arr[], int n){
	int i;
	printf("Enter %d values:\n",n);
	for(i=0; i<n; i++)
		scanf("%d",arr +i);
}

void merg(int arr1[], int arr2[], int n1, int n2, int arr[]){
	int i;
	for(i=0;i<n1+n2;i++){
		if(i<n1)
			arr[i]=arr1[i];
		else
			arr[i]=arr2[i-n1];
	}
}
