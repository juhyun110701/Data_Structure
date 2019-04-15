#include <stdio.h>
#define SIZE 6

char queue[SIZE];
int rear = -1;
int front = 0;	//꼭 reat=-1, front=0에서 시작해야 하는 것은 아님

int add(char data){
	if (rear == SIZE - 1){
		printf(" Queue is Full!\n");
		return -1;
	}
	queue[++rear] = data;
	return 0;
}

int delete(void){
	if (rear < front){
		printf("Queue is Empty!\n");
		return '\0';
	}
	return queue[front++];
}

int main(void){
	add('A'); add('B'); add('C');
	printf("delete:%c\n", delete());
	printf("delete:%c\n", delete());
	printf("delete:%c\n", delete());
	printf("delete:%c\n", delete());
	add('D'); add('E'); add('F'); add('G');

	return 0;
}