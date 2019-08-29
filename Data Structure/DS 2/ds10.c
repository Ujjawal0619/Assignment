#include<stdio.h>
main()
{
	int n,i,k,z;
	printf("Enter size of array. : ");
	scanf("%d%d",&n,&k);
	z=n+k;
	int a[n], a1[k], a2[z];
	printf("Enter value in  first array.:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		printf("Enter value in  second array.:\n");
	for(i=0;i<k;i++)
	scanf("%d",&a1[i]);
	for(i=0;i<z;i++){
		if(i<n)
		a2[i]=a[i];
		else
		a2[i]=a1[i-n];
	}
		printf("After merge two array is .:\n");
		for(i=0;i<z;i++)
		printf("%d\n",a2[i]);
}
