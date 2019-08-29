#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,pos;
	printf("How many values you want or enter?\n");
	scanf("%d",&n);
	int arr[n+1];
	printf("Enter values:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter position for deletion.\n");
	scanf("%d",&pos);
	pos--;
	for(i=pos;i<n-1;i++)
		arr[i]=arr[i+1];
	printf("Deleted.");
	
	for(i=0;i<n-1;i++){
	printf("%d ",arr[i]);
	}
	return 0;
}
