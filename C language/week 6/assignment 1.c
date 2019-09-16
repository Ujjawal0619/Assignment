/*Ascessing elements of array using pointer*/

int inputAndSum(int *arr, int n){
	int i, sum=0;
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
		sum+=*(arr+i);
	}
	return sum;
}

void main(){
	int arr[50], n, i;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("\nSum of the elements of array is %d",inputAndSum(arr, n));
	return 0;
}
