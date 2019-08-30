#include<stdio.h>

int main(){
	int num, rev;
	puts("Enter a number:\n");
	scanf("%d",&num);
	rev=reverse(num);
	printf("Reversed no is:\n%d",rev);
	return 0;
}

int reverse(int num){
   static int r = 0;
   
   if (num == 0)
      return 0;
   r = r * 10;
   r = r + num % 10;
   reverse(num/10);
   return r;
}
