#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,num,pos;
	printf("How many values you want or enter?\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter value for deletion.\n");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		if(num==arr[i]){
		for(;i<n-1;i++)
			arr[i]=arr[i+1];
		printf("deleted.");
		break;
		}
	}
	if(n==i){
		printf("Vlaue not foud.");
	}
	for(i=0;i<n-1;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
