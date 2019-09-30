/*program to multiply two matrix using pointer*/
#include<stdio.h>

void inputMatrix(int matrix[][10], int *m, int *n){
	int i,j;
	printf("Enter order of matrix");
	scanf("%d%d",m ,n);
	printf("Enter %d elements",*m**n);
	for(i=0; i<*m; i++)
		for(j=0; j<*n; j++)
			scanf("%d",(*(matrix+i)+j));
			
}

int main(){
	int arr1[10][10], m, n, arr2[10][10], p, q, arr3[10][10]={0}, i, j, k;
	
	inputMatrix(arr1, &m, &n);
	inputMatrix(arr2, &p, &q);
	if(n!=p){
		printf("Can not multiplied.");
		exit(1);
	}
	
	/*multiply*/
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
			for(k=0;k<n;k++)
				*(*(arr3+i)+j)+=*(*(arr1+i)+k)* *(*(arr2+k)+j);
				
	for(i=0; i<m; i++){
		for(j=0; j<n; j++)
			printf("%-3d",*(*(arr3 +i)+j));
		printf("\n");
	}
	return 0;
}
