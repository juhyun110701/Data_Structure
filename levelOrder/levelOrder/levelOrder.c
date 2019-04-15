#include <stdio.h>
#include <stdlib.h>

struct node **queue;
int front = 0, rear = -1, nodeCnt = 0;

struct node{
	struct node *llink;
	int data;
	struct node *rlink;
};

struct node *binaryTree(int a[], int left, int right){
	int mid;
	struct node *p = NULL;
	if (left <= right){
		mid = (left + right) / 2;
		p = (struct node *) malloc(sizeof (struct node));
		nodeCnt++;
		printf("%d\n", a[mid]);
		p->data = a[mid];
		p->llink = binaryTree(a, left, mid - 1);
		p->rlink = binaryTree(a, mid + 1, right);
	}
	return p;
}

int ADD(struct node *data){
	if (rear == nodeCnt){
		printf("Queue is full!\n");
		return -1;
	}
	queue[++rear] = data;
	return 0;
}

struct node *DELETE(){
	if (front > rear){
		printf("Queue is empty!");
		return NULL;
	}
	return queue[front++];
}
void LevelOrder(struct node *str){
	struct node *p = NULL;
	if (str != NULL){
		ADD(str);
		while (1){
			p = DELETE();
			if (p == NULL)
				break;
			printf("%d  ", p->data);
			if (p->llink != NULL)
				ADD(p->llink);
			if (p->rlink != NULL)
				ADD(p->rlink);
		}
	}
}

int main(){
	int a[] = { 3, 5, 7, 10, 15, 17, 20, 25, 28, 31, 33, 35 };
	struct node *root;
	int n = sizeof (a) / sizeof (int);
	int i;

	root = binaryTree(a, 0, n - 1);

	printf("\n");
	printf("\n");

	queue = (struct node **) malloc(sizeof (struct node *) * nodeCnt);

	LevelOrder(root);

	free(queue);
	return 0;
}
