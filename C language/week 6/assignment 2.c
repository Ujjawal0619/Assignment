/*program to read integers into an array and reversing them using pointer*/
#include<stdio.h>

int main(){
	int arr[50], n, i, temp;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
		scanf("%d",(arr + i));

	/* reverse logic */
	for(i=0; i<n/2; i++){
		temp=*(arr +i);
		*(arr + i)=*(arr+n-i-1);
		*(arr+n-i-1)=temp;
	}
	printf("Reversed array is:\n");
	for(i=0; i<n; i++)
		printf("%d ",*(arr+i));
	return 0;
}
