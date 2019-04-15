#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *llink;
	int data;
	struct node *rlink;
};

void preOrder(struct node *p){
	//d->l->r
	if (p != NULL){
		printf(" %d →", p->data);
		preOrder(p->llink);
		preOrder(p->rlink);
	}
}

void inOrder(struct node *p){
	//l->d->r
	if (p != NULL){
		inOrder(p->llink);
		printf(" %d →", p->data);
		inOrder(p->rlink);
	}
}

void postOrder(struct node *p){
	//l->r->d
	if (p != NULL){
		postOrder(p->llink);
		postOrder(p->rlink);
		printf(" %d →", p->data);
	}
}

binaryTree(int a[], int left, int right){
	int mid;
	struct node *p = NULL;
	if (left <= right){
		mid = (left + right) / 2;
		p = (struct node *)malloc(sizeof(struct node));
		p->data = a[mid];
		p->llink = binaryTree(a, left, mid - 1);
		p->rlink = binaryTree(a, mid + 1, right);
	}
	return p;
}

void delete(struct node *p){
	if (p != NULL){
		delete(p->llink);
		delete(p->rlink);
		printf("%d ", p->data);
		free(p);
	}
}

int main(void){
	int a[] = { 3, 5, 7, 10, 15, 17, 20, 25, 28, 31, 33, 35 };
	int n = sizeof(a) / sizeof(int);

	struct node *root;
	root = binaryTree(a, 0, n - 1);
	
	printf("\n전위운행 : ");
	preOrder(root);

	printf("\n중위운행 : ");
	inOrder(root);
	
	printf("\n후위운행 : ");
	postOrder(root);
	
	printf("\n노드 사라지는 순서 : ");
	delete(root);
	printf("\n");

	return 0;
}