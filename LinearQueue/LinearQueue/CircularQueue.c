#include <stdio.h>
#define SIZE 6

char cqueue[SIZE];
int rear = -1;
int front = 0;	//꼭 reat=-1, front=0에서 시작해야 하는 것은 아님
int cnt = 0;

int add(char data){
	if (cnt==SIZE){
		printf(" CQueue is Full!\n");
		return -1;
	}
	cnt++;
	cqueue[++rear%SIZE] = data;
	return 0;
}

int delete(void){
	if (cnt==0){
		printf("CQueue is Empty!\n");
		return '\0';
	}
	cnt--;
	return cqueue[front++%SIZE];
}

int main(void){
	add('A'); add('B'); add('C');
	printf("delete:%c\n", delete());
	printf("delete:%c\n", delete());
	printf("delete:%c\n", delete());
	printf("delete:%c\n", delete());
	add('D'); add('E'); add('F'); add('G');
	printf("delete:%c\n", delete());
	printf("delete:%c\n", delete());
	printf("delete:%c\n", delete());
	printf("delete:%c\n", delete());
	add('H'); add('I');

	return 0;
}