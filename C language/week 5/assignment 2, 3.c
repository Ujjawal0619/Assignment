#include<stdio.h>

void input(int *values, int n){
	int i;
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",values +i);
	}
}

void display(int *values, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",*(values +i));
	}
}

void insertAt(int *values, int *n){
	int num, i, pos;
	printf("\nEnter a value and position to insert\n");
	scanf("%d%d", &num, &pos);
	pos--;
	for(i=*n;i>pos;i--)
		values[i]=values[i-1];
	values[pos]=num;
	*n=*n+1;
}

void deleteAt(int *values, int *n){
	int pos, i;
	printf("Enter position to delete:\n");
	scanf("%d", &pos);
	if(pos>*n){
		printf("\nInvalid location:");
		return ;
	}
	for(i=pos-1;i<*n-1;i++)
		values[i]=values[i+1];
	(*n)--;
}

int main(){
	int i, arr[100], n;
	printf("Enter the no of elements:\n");
	scanf("%d", &n);
	input(arr, n);
	display(arr, n);
	insertAt(arr, &n);
	//insertAt(arr, &n);
	display(arr, n);
	deleteAt(arr, &n);
	display(arr, n);
	return 0;
}
