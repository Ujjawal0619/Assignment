#include<stdio.h>
#include<stdlib.h>

typedef struct STACK {
	int top;
	int type;//show the first half(0) or second half(1)
	unsigned int capacity;
	int maxcap;
	int *array;	
}stack;

void createTwoStack(int cap1, stack *s1, int cap2, stack *s2){
	int *arr;
	s2->maxcap=cap1+cap2;
	s1->capacity=cap1;
	s2->capacity=cap1+1;
	arr=(int*)malloc(sizeof(int)*(cap1+ cap2));
	s1->type=0;
	s2->type=1;
	s1->top=-1;
	s2->top=cap1 + cap2;
	s1->array= arr;
	s2->array= arr+cap1+cap2-1;
	printf("\nStack created sucessfully:");
}
void push(stack *s){
	int value;
	if(s->capacity-1==s->top){
		printf("\nOver flow:");
		return;	
	}
	printf("\nEnter a value:");
	scanf("%d",&value);
	if(s->type){
		s->top--;
		s->array[s->top]=value;
		return;
	}
	s->top++;
	s->array[s->top]=value;
}
int pop(stack *s){
	if(s->type==0 && s->top==-1 || s->type==1 && s->top==s->maxcap){
		printf("\nUnder flow:");
		return;
	}
	if(s->type){
		s->top++;
		return (s->array[s->top-1]);
	}
	s->top--;
	return (s->array[s->top+1]);
}

int main(){
	unsigned int cap1, cap2, choice;
	stack s1, s2;
	printf("Enter the capacity of stack 1 and 2 respectively:\n");
	scanf("%d%d",&cap1, &cap2);
	createTwoStack(cap1, &s1, cap2, &s2);
	while(1){
		system("cls");
		printf("Enter your choice:\n\n");
		printf("1. push in stack 1.\n");
		printf("2. push in stack 2.\n");
		printf("3. pop from stack 1.\n");
		printf("4. pop from stack 2.\n");
		printf("5. exit.\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push(&s1);
				break;
			case 2:
				push(&s2);
				break;
			case 3:
				printf("\n%d",pop(&s1));
				break;
			case 4:
				printf("\n%d",pop(&s2));
				break;
			case 5:
				exit(1);
			default:
				printf("Invalid input try agin...");
				getch();
		}
	}
	return 0;
}
