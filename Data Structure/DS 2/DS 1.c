 #include<stdio.h>

int main(){
	int n,m,i;
	printf("Enter the no of values you want or enter in first and second array.\n");
	scanf("%d%d",&n,&m);
	int arr1[n], arr2[m], arr3[m+n];
	printf("Enter ascending values in first array.:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr1[i]);
		
	printf("Enter ascending values in second array.:\n");
	for(i=0;i<m;i++)
		scanf("%d",&arr2[i]);
	
	for(i=0;i<n+m;i++)
	if(i<n)
		arr3[i]=arr1[i];
	else
		arr3[i]=arr2[i-n];
		
	sort(arr3, m+n);
	
	printf("Values in sorted merged array:\n");
	for(i=0;i<n+m;i++)
		printf("%d ",arr3[i]);
		
	return 0;
}
void sort(int arr[], int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++)
		if(arr[i]>arr[j]){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	}
}
