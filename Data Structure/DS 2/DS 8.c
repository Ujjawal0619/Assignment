#include<stdio.h>

int main(){
	int m,i,j;
	printf("Enter order of square matrix.\n");
		scanf("%d",&m);
	int matrix[m][m];
		
	for(i=0;i<m;i++)
		for(j=0;j<m;j++){
			if(i<j)
				matrix[i][j]=1;
			else if(i>j)
				matrix[i][j]=-1;
			else
				matrix[i][j]=0;
		}
		
	printf("\n\nMatrix is.\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%4d",matrix[i][j]);		
		}
	printf("\n");
	}
	return 0;		
}
