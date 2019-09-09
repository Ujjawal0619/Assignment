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

int main(){
	int i, arr1[100], arr2[100], n;
	printf("Enter the no of elements:\n");
	scanf("%d",&n);
	input(arr1,n);
	display(arr1,n);
	for(i=0;i<n;i++)
		arr2[i]=arr1[i];
	printf("\n");
	display(arr2, n);
	return 0;
}
