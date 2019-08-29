#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[3][6], max=0, i, j;
	char s1[10], s2[10], s3[10], s4[10], s5[10];
	printf("Enter first Name of five students.\n");
	gets(s1);
	gets(s2);
	gets(s3);
	gets(s4);
	gets(s5);
	for(i=0;i<3;i++){
	printf("Enter number of respective students.\n");
		for(j=0;j<6;j++){
			if(i==0 && j==0)
				printf("For C language:\n");
			if(i==1 && j==0)
				printf("For DS:\n");
			if(i==2 && j==0)
				printf("For Maths:\n");
			if(j<5){
			scanf("%d",&arr[i][j]);
			if(max<arr[i][j])
			max=arr[i][j];
			}
			else
			arr[i][j]=max;
		}
		system("cls");
		max=0;
	}
	printf("            ");
	printf("%10s|", s1);
	printf("%10s|", s2);
	printf("%10s|", s3);
	printf("%10s|", s4);
	printf("%10s|", s5);
	printf("   Maximum|\n");
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
		if(i==0 && j==0)
			printf("C language:|");
		if(i==1 && j==0)
			printf("DS:        |");
		if(i==2 && j==0)
			printf("For Maths: |");
		printf("%10d|",arr[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
