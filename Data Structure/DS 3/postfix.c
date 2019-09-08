#include<stdio.h>
#include<stdlib.h>

/*stack with operations*/
typedef struct stack{
	int top;
	unsigned int capacity;
	char *arr;	
}stack;

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

int main(){
	char arr[100];
	printf("Enter a infix expression.\n");
	gets(arr);	
	printf("%s",topostfix(arr));
	getch();
	return 0;
}

