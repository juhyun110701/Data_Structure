#include <stdio.h>

struct node{
	struct node *llink;
	int data;
	struct node *rlink;
};

struct node *BinaryTree(int a[], int left, int right){
	int mid;
	struct node *p = NULL;
	
	if (left <= right){
		mid = (left + right) / 2;
		p = (struct node *)malloc(sizeof(struct node));
		p->data = a[mid];
		p->llink = BinaryTree(a, left, mid - 1);
		p->rlink = BinaryTree(a, mid + 1, right);
	}
	return p;
}

void BinaryTreeSearch(struct node *p, int key){
	int cnt = 0;
	while (p != NULL){
		cnt++;
		if (key == p->data) break; 
		if (key > p->data) p = p->rlink;
		else p = p->llink;
	}

	if (p == NULL) printf("ã���� �ϴ� ���� ���� !\n");
	else printf("%dȸ ���Ͽ� ã��!\n", cnt);
}

void DeleteAll(struct node *p){
	if (p != NULL){
		DeleteAll(p->llink);
		DeleteAll(p->rlink);
		printf("%d ", p->data);
		free(p);
	}
}

int main(void){
	int a[] = { 2, 3, 5, 9, 14, 29, 34, 41, 50, 55 };
	int n = sizeof(a) / sizeof(int);
	struct node *root;
	int key;

	printf("�� ��� : ");
	for (int i = 0; i < n; i++) printf("%d ", a[i]);

	root = BinaryTree(a, 0, n - 1);
	printf("\nã�� �� : ");
	scanf_s("%d", &key);
	BinaryTreeSearch(root, key);
	DeleteAll(root);
	puts("");
	return 0;
}