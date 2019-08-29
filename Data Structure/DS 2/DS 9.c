#include<stdio.h>

int main(){
	int arr[100],i,j,n=10;
	printf("Enter values in array:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\nPairs whose sum is 50 are:\n");
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(arr[i]+arr[j]==50)
			printf("%4d, %4d\n", arr[i],arr[j]);
		}
	}
	return 0;
}
