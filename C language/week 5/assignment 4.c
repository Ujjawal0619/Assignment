/* Multiplication of matrix without function */
#include<stdio.h>

void input(int mat[10][10], int m, int n){
	int i,j;
	printf("Enter %d elements:\n", m*n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat[i][j]);
		}
	}
}

int main(){
	int i, j, k, mat1[10][10], mat2[10][10], m, n, p, q, mat3[10][10]={0};
	printf("Enter the order of first matrix:\n");
	scanf("%d%d",&m,&n);
	printf("Enter the order of second matrix:\n");
	scanf("%d%d",&p,&q);
	input(mat1, m, n);
	input(mat2, p, q);
	if(n!=p)
		return 0;
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			for(k=0;k<q;k++){
				mat3[i][j]+=mat1[i][k]*mat2[k][j];
			}
	printf("\nProduct of matrices are:\n\n");
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%-3d",mat3[i][j]);
		}
	printf("\n");
	}
	return 0;
}
