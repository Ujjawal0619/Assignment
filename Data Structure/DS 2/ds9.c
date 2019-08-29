#include<stdio.h>
main()
{
	int n,i,j,temp,k;
	printf("Enter size of array. : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter value in array.:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		  if(a[i]>a[j]){
		  temp=a[i];
		  a[i]=a[j];
		  a[j]=temp;
		}
	}
	printf("Enter location of delete value.: ");
	scanf("%d",&k);
	if(k<n)
	for(i=k;i<n;i++)
	a[i]=a[i+1];
	else
	printf("Invalid location.\n");
		printf("After deletion .:\n");
	for(i=0;i<n-1;i++)
	printf("%d\n",a[i]);
}
