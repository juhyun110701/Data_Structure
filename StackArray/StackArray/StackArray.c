#include <stdio.h>
#define MAX 6
int top = -1;
int stack[MAX];

int push(int data){
	if (top == MAX - 1){
		printf("stack overflow\n");
		return -1;
	}
	stack[++top] = data;
	return 0;
}

int pop(){
	if (top == -1){
		printf("stack underflow\n");
		return -1;
	}
	return stack[top--];
}

int main(void){
	push(10); push(20); push(30); push(40); push(50); push(60); push(70);
	printf("pop : %d\n",pop());
	printf("pop : %d\n", pop());
	printf("pop : %d\n", pop());
	push(80);
	printf("pop : %d\n", pop());
	printf("pop : %d\n", pop());
	printf("pop : %d\n", pop());
	printf("pop : %d\n", pop());
	printf("pop : %d\n", pop());
	
	return 0;
}