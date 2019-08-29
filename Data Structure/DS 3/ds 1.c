#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
	int top;
	unsigned int capacity;
	int *arr;	
}stack;

stack* createStack(int capacity){
	stack *ptr;
	ptr=malloc(sizeof(stack));
	if(!ptr)
		return NULL;
	ptr->top=-1;
	ptr->capacity=capacity;
	ptr->arr=malloc(capacity*sizeof(int));
	if(!(ptr->arr))
		return NULL;
	return ptr;
}

int push(stack* s, int value){
	if(s->top==s->capacity -1)
	return 0;
	s->top++;
	s->arr[s->top]=value;
	return 1;
}

int pop(stack *s){
	if(s->top==-1)
	return 0;
	s->top--;
	return 1;
}

void peek(stack *s){
	if(s->top==-1)
	printf("\nUnder flow!");
	else
	printf("\n Vlaue at top = %d",s->arr[s->top]);
}

int main(){
	stack *s;
	int choice, capacity, value;
	printf("Enter the capacity of stack.\n");
	scanf("%d",&capacity);
	s=createStack(capacity);
	system("cls");
	while(1){
		system("cls");
		printf("Enter your choice.\n\n");
		printf("1. Push into the stack.\n");
		printf("2. Pop form stack.\n");
		printf("3. Peek value.\n");
		printf("4. Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter a value\n");
				scanf("%d",&value);
				if(!push(s,value)){
					printf("Over flow");
					getch();
				}
				break;
			case 2:
				if(pop(s))
					printf("Succeed.");
				else
					printf("Under flow.");
				getch();
				break;
			case 3:
				peek(s);
				getch();
				break;
			case 4:
				exit(1);
			default:
				printf("Invalid input, try again.");
				getch();
				}
		}
	return 0;
}
