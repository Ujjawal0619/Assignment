#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void solvepostfix(char[]);
int top=-1;
int STACK[20];
void push(int);
int pop();
int checkOperand(char);






/*stack with operations*/
typedef struct stack{
	int top;
	unsigned int capacity;
	char *arr;	
}stack;


void solveinfix(){

char s[50];

stack* createStack(int capacity){
	stack *ptr;
	ptr=malloc(sizeof(stack));
	if(!ptr)
		return NULL;
	ptr->top=-1;
	ptr->capacity=capacity;
	ptr->arr=malloc(capacity*sizeof(char));
	if(!(ptr->arr))
		return NULL;
	return ptr;
}
int push(stack* s, char symbol){
	if(s->top==s->capacity -1)
	return 0;
	s->top++;
	s->arr[s->top]=symbol;
	return 1;
}
int pop(stack *s){
	if(s->top==-1)
	return 0;
	s->top--;
	return 1;
}
char peek(stack *s){
	if(s->top==-1)
	return '\0';
	else
	return s->arr[s->top];
}
 //stack operation end
 // priority checking here
int priority(char ch){
	switch(ch){
		case '+': return 1;
		case '-': return 1;
		case '*': return 2;
		case '/': return 2;
		case '%': return 2;
		case '^': return 3;
		case '\0': return 0;
		case '(': return 0;
		case ')': return 0;
	}
}

//function to check tocken is an operater or not
int isOperator(char ch){
	if( ch=='+' || ch=='-' || ch=='%' || ch=='/' || ch=='*' || ch=='^')
		return 1;
	return 0;
}

// converting the string into postfix
char* topostfix(char exp[]){
	int i,j=0;
	static char postfix[100];
	stack *stk;
	stk=createStack(20);
	for(i=0;exp[i]!='\0';i++){
		if(isOperator(exp[i])){
			while(priority(exp[i])<=priority(peek(stk))){
				postfix[j]=peek(stk);
				pop(stk);
				j++;	
			}	
			push(stk,exp[i]);
			}
		else if(exp[i]=='('){
			push(stk,'(');
		}
		else if(exp[i]==')'){
			while(peek(stk)!='('){
				postfix[j]=peek(stk);
				pop(stk);
				j++;
			}
			pop(stk);
		}
		else{
			postfix[j]=exp[i];
			j++;
		}
	}
	while(peek(stk)!='\0'){
		postfix[j]=peek(stk);
		pop(stk);
		j++;
	}
	return postfix;
}
	printf("Enter infix expression:\n");
	scanf("\n");
	gets(s);
	solvepostfix(topostfix(s));

}







//stack operarions:
void push(int a){
	top++;
	STACK[top]=a;
}

int pop(){
	int a; 
	a=STACK[top];
	top--;
	return a;
}
 
 //solving methods:
void solvepostfix(char postfix[]){
	char symbol;
	int a, b, result, p=0, data;

	while(postfix[p]!='\0'){
		symbol= postfix[p];
		if(checkOperand(symbol)){
			printf("enter value of %c\n", symbol);
			scanf("%d", &data);
			push(data);
		}
		else{
			a=pop();
			b=pop();
			switch(symbol){
				case '+':
					result=b+a;
					break;
				case '-':
					result=b-a;
					break;
				case '/':
					result=b/a;
					break;
				case '*':
					result=b*a;
					break;
				case '^':
					result=pow(b,a);
					break;
				default:
					printf("wrong operator");
			}
			push(result);
		}
		p++;
	}
	result=pop();
	printf("\nResult is: %d", result);
	printf("\npress any key to continue.....");
	getch();
}

void solveprefix(){
	char postfix[50], symbol,n;
	int a, b, result, p=0, data;
	printf("Enter prefix expression:");
	scanf("\n");
	gets(postfix);
	while(postfix[p]!='\0'){
		p++;
	}
	while(p>0){
		symbol= postfix[p-1];
		if(checkOperand(symbol)){
			printf("enter value of %c", symbol);
			scanf("%d", &data);
			push(data);
		}
		else{
			a=pop();
			b=pop();
			switch(symbol){
				case '+':
					result=b+a;
					break;
				case '-':
					result=b-a;
					break;
				case '/':
					result=b/a;
					break;
				case '*':
					result=b*a;
					break;
				case '^':
					result=pow(b,a);
					break;
				default:
					printf("wrong operator");
			}
			push(result);
		}
		p--;
	}
	result=pop();
	printf("Result is: %d", result);
	printf("\npress any key to continue.....");
	getch();
}


// function utilities:
int checkOperand(char symbol){
	if((symbol>=65 && symbol<=90) || (symbol>=97 && symbol<=122))
		return 1;
	else 
		return 0;
}
// Menue method:
int menue(){
	int choice;
	system("cls");
	printf("Enter your choice:\n\n");
	printf("1. Postfix exp.\n");
	printf("2. Prefix exp.\n");
	printf("3. Infix exp.\n");
	printf("4. Exit.\n");
	scanf("%d",&choice);
	return choice;
}

//main:
int main(){
	char exp[50];
	while(1){
		switch(menue()){
			case 1:
				printf("Enter postfix expression without space:\n");
				scanf("\n");
				gets(exp);
				solvepostfix(exp);
				break;
			case 2:
				solveprefix();
				break;
			case 3:
				solveinfix();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Invalid choice, Try again:\n press any key to continue.....");
				getch();
				break;
		}
	}
	return 0;
}


