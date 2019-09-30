/*program to add and subtract two matrices:*/
#include<stdio.h>

int main(){
	int mat1[10][10], m, n, mat2[10][10], mat3[10][10], mat4[10][10], i, j;
	
	printf("Enter order of matrix:\n");
	scanf("%d%d",&m, &n);
	
	printf("Enter %d elements in matrix 1:\n", m*n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",*(mat1+i)+j);
			
	printf("Enter %d elements in matrix 2:\n", m*n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			scanf("%d",*(mat2+i)+j);
			/*addition and subtraction*/
			mat3[i][j]=mat1[i][j]+mat2[i][j];
			mat4[i][j]=mat1[i][j]-mat2[i][j];
		}
	
	printf("\nThe sum of matrix 1 and matrix 2 is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%3d",mat3[i][j]);
		printf("\n");
	}
	
	printf("\nThe subtraction of matrix 1 and matrix 2 is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%3d",mat4[i][j]);
		printf("\n");
	}
	return 0;
}
