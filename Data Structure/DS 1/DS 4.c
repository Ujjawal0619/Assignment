#include<stdio.h>
main()
{
	int n;
	printf("Enter numbers ");
	scanf("%d",&n);
	int a[n],i,max,max2,ind=0;
	printf("\n Entered number ");
	scanf("%d",&a[0]);
	max=a[0];
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
		{
			max=a[i];
		}
	}
	//printf("largest=%d",max);
     max2=max;
     for(i=0;i<n;i++)
     {
     if((max-a[i])&&(max2>(max-a[i])))
     {
       max2=max-a[i];
       ind=i;
     }
 }
     printf("\n Second largest no=%d",a[ind]);
}
