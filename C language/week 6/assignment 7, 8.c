/*program to sum upper and lower traingle of given square matrix*/
#include<stdio.h>

int main(){
	int matrix[10][10],i ,j, UTsum=0, LTsum=0, m;
	
	printf("Enter order of square matrix:\n");
	scanf("%d",&m);
	
	printf("Enter %d elements:\n", m*m);
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			scanf("%d",*(matrix+i)+j);
			
	for(i=0;i<m;i++)
		for(j=0;j<m;j++){
		if(i<=j)
			UTsum+=matrix[i][j];
		if(i>=j)
			LTsum+=matrix[i][j];
	}
	
		printf("sum of upper triangular and lower triangular matrix is %d and %d", UTsum, LTsum);
	return 0;
}
