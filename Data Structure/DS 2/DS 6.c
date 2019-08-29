#include<stdio.h>

int main(){
	int matrix[3][3],i,j,temp;
	printf("Enter elements of matrix.\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&matrix[i][j]);
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			if(i<j){
			temp=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=temp;
			}
		}
	
	printf("\n\nMatrix is.\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%4d",matrix[i][j]);		
		}
	printf("\n");
	}
	return 0;
}
