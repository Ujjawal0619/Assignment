#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter length of: ");
	scanf("%d",&n);
	int a[n],i;
	printf("\n Enter an array ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n The Entered array is \n  ");
	for(i=0;i<n;i++)
		printf("\n %d",a[i]);
	getch();
}
