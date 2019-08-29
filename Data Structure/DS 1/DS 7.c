#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,num,pos;
	printf("How many values you want or enter?\n");
	scanf("%d",&n);
	int arr[n+1];
	printf("Enter values:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter value for insertion.\n");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		if(num<=arr[i]){
			pos=i;
			break;
		}
	}
	if(pos==i){
		for(i=n+1;i>=pos;i--)
			arr[i]=arr[i-1];
		arr[pos]=num;
		printf("inserted.");
	}
	else{
		arr[n+1]=num;
		printf("inserted.");
	}
	for(i=0;i<n+1;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
