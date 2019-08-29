#include<stdio.h>
main()
{
	system("cls");
	int n,i;
	printf("Enter a no ");
	scanf("%d",&n);
	float a[n],sum=0;
	float mean;
	printf("\n Enter an array ");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
			sum=sum+a[i];
	}
		mean=sum/n;
	printf("\n Mean=%f",mean);
}
