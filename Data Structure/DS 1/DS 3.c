#include<stdio.h>
main()
{
	int n;
	printf("Enter number ");
	scanf("%d",&n);
	int a[n],i,min,ind=0;
	printf("\n Enter array ");
	scanf("%d",&a[0]);
	min= a[0];
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(min>a[i]){
			min=a[i];
			ind=i;
		}
	}
	printf("Position of min no is %d",ind+1);
}
