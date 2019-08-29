#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,j,count=0;
	printf("How many values you want or enter?\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i]==arr[j]){
			count++;
			if(count==2){
				printf("\n! Douplicate Entries.");
				exit(1);
			}
			}
		}
		count=0;
	}
	printf("\nNo duplicate entries.");
	return 0;
}
