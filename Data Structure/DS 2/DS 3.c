#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,min,max,pmin,pmax,temp;
	printf("How many values you want or enter?\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(i=0;i<n;i++){
		if(min>arr[i]){
			pmin=i;
			min=arr[i];
		}
		if(max<arr[i]){
			pmax=i;
			max=arr[i];
		}
	}
	
	temp=arr[pmin];
	arr[pmin]=arr[pmax];
	arr[pmax]=temp;
	printf("Array atrer swapping max min.\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
