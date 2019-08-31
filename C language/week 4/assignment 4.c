#include<stdio.h>

int main(){
	int arr[20],n,i;
	printf("Enter number of values:\n");
	scanf("%d",&n);
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	scanf("%d",arr+i);
	removeDuplicate(arr,&n);
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
//not sorted O(n^2), if sorted complexity willbe O(n);
void removeDuplicate(int arr[], int *n){
	int i,j,k;
	for(i=0;i<*n;i++){
		for(j=i+1;j<*n;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<*n;k++)
					arr[k]=arr[k+1];
				j--;
				(*n)--;
			}
		}
	}
}
