#include<stdio.h>
void input(int [], int);
void merg(int[], int[], int , int , int[]);
int main(){
	int arr[20], i, n, value;
	printf("Enter the number of values:\n");
	scanf("%d",&n);
	input(arr, n);
	printf("Enter a value to search:\n");
	scanf("%d",&value);
	search(arr, n, value);
	return 0;
}

void input(int arr[], int n){
	int i;
	printf("Enter %d values:\n",n);
	for(i=0; i<n; i++)
		scanf("%d",arr +i);
}

void search(int arr[], int n, int value){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==value){
			printf("%d is present at index %d:", value, i);
			return;
		}
	}
	printf("Value not found!");
}
