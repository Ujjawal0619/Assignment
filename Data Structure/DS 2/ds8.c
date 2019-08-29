#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter size of array. : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter value in array.:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter delete location.:\n");
	scanf("%d",&j);
	if(j<n)
	{
		for(i=j;i<n;i++)
		a[i]=a[i+1];
	}
	else{
		printf("\n Invalid location. ");
	}
	printf("After deletion array is listed below.:-\n");
	for(i=0;i<n-1;i++)
	printf(" %d\n",a[i]);
}
