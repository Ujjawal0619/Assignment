#include<stdio.h>

int main(){
	int m,i,j,sum=0;
	printf("Enter order of square matrix.\n");
		scanf("%d",&m);
	int matrix[m][m];
	printf("Enter elements:\n");
	for(i=0;i<m;i++)
		for(j=0;j<m;j++){
				scanf("%d",&matrix[i][j]);
				if(i==j)
				sum+=matrix[i][j];
		}
		
	printf("\n\nSum of diagnol elements is %d.",sum);
	return 0;		
}
