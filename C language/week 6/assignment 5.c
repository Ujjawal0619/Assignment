/*find prime no in given interval*/
#include<stdio.h>

int main(){
	int a, b, i, j, flag;
	printf("Enter interval:\n");
	scanf("%d%d",&a, &b);
	
	for(i=++a;i<b;i++){
	
		if(i==0 || i==1)
			continue;
		flag=1;
		for(j=2;j<=i/2;j++)
			if(!(i%j)){
				flag=0;
				break;
			}
	if(flag==1)
		printf("%4d ",i);
	}
	return 0;
}
