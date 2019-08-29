#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,i;
	printf("Enter the no of values you want or enter in first and second array.\n");
	scanf("%d%d",&n,&m);
	int arr1[n], arr2[m], arr3[m+n];
	printf("Enter values in first array.:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr1[i]);
		
	printf("Enter values in second array.:\n");
	for(i=0;i<m;i++)
		scanf("%d",&arr2[i]);
	
	for(i=0;i<n+m;i++)
	if(i<n)
		arr3[i]=arr1[i];
	else
		arr3[i]=arr2[i-n];
		
	printf("Values in merged array:\n");
	for(i=0;i<n+m;i++)
		printf("%d ",arr3[i]);
	return 0;
}
