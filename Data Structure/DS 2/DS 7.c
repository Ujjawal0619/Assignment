#include<stdio.h>

int main(){
	int i,j,m,n;
	printf("Enter order of matrix.\n");
	scanf("%d%d",&m,&n);
	int matrix1[m][n];
	int matrix2[m][n];
	int matrix3[m][n];
	printf("Enter elements of first matrix.\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&matrix1[i][j]);
	printf("Enter elements of second matrix.\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&matrix2[i][j]);
	//adding 
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
	
	printf("\n\n Sum Matrix is.\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%4d",matrix3[i][j]);		
		}
	printf("\n");
	}
}
