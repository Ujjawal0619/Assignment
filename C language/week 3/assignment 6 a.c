int main(){
	int n=5;
	printf("factorial of %d is %d", n, fact(n));
}

int fact(int n){
	if(n==2)
		return n;
	return n*fact(n-1);
}
