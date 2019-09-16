/*program to merg two array*/
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
	for(i=0;i<n;i++){
		printf("%d ",*(values +i));
	}
}

int* merg(int arr1[], int arr2[], int p, int q){
	int *arr, i;
	arr=(int*)malloc((p+q)*sizeof(int));	
	for(i=0;i<p+q;i++){
		if(i<p)
			arr[i]=arr1[i];
		else
			*(arr+i)=arr2[i-p];
	}
	return arr;
}

int main(){
	int i, *arr, arr1[20], arr2[20], p, q;
	printf("Enter the no of elements of first and second arry:\n");
	scanf("%d%d", &p, &q);
	input(arr1, p);
	input(arr2, q);
	arr=merg(arr1, arr2, p, q);
	display(arr, p+q);
	return 0;
}
