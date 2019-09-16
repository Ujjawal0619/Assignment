#include<stdio.h>

void input(int values[][10], int m, int n){
	int i, j;
	printf("Enter %d elements saperated by space:\n",m*n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			scanf("%d",&values[i][j]);
	}
}

void display(int values[][10], int m, int n){
	int i, j;
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		printf("%4d ",values[i][j]);
	printf("\n\n");
	}
}

void multiply(int mat1[][10], int mat2[][10], int mat3[][10], int m, int n, int p, int q){
	int i, j, k;
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			for(k=0;k<q;k++){
			mat3[i][j]+=mat1[i][k]*mat2[k][j];
			}	
		}
	}
}

int main(){
	int i, mat1[10][10], mat2[10][10], mat3[10][10]={{0}}, m, n, p, q;
	printf("Enter the order of matrix 1:\n");
	scanf("%d%d", &m, &n);	
	printf("Enter the order of matrix 2:\n");

	scanf("%d%d", &p, &q);
	printf("Enter elements of 1 matrix:\n");
	input(mat1, m, n);
	printf("Enter elements of 2 matrix:\n");
	input(mat2, p, q);
	display(mat1, m, n);
	display(mat2, p, q);
	multiply(mat1, mat2, mat3, m, n, p, q);
	display(mat3, m, q);
	return 0;
}
