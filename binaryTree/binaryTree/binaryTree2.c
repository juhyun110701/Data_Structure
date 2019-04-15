#include <stdio.h>

int n;

void preOrder(char a[], int nodeNum){
	if (nodeNum < n && a[nodeNum] != NULL){
		printf("%c ℃ ", a[nodeNum]);
		preOrder(a, nodeNum * 2);
		preOrder(a, nodeNum * 2+1);
	}
}

void inOrder(char a[], int nodeNum){
	if (nodeNum < n && a[nodeNum] != NULL){
		inOrder(a, nodeNum * 2);
		printf("%c ℃ ", a[nodeNum]);
		inOrder(a, nodeNum * 2 + 1);
	}
}

void postOrder(char a[], int nodeNum){
	if (nodeNum < n && a[nodeNum] != NULL){
		postOrder(a, nodeNum * 2);
		postOrder(a, nodeNum * 2 + 1);
		printf("%c ℃ ", a[nodeNum]);
	}
}

int main(void){
	char a[] = { NULL, 'A', 'B', 'C', 'D', 'E', NULL, 'F', NULL, NULL, 'G', NULL, NULL, NULL, 'H', 'I', NULL, NULL, NULL, NULL, NULL, 'J' };
	//INDEX		0		1	2	 3	 4	  5		6	  7		8		9		10	  11	  12     13    14 15   16    17     18      19     20    21
	n = sizeof(a) / sizeof(char);	//n=22

	printf("傈困 款青 : ");
	preOrder(a, 1); printf("\b\b  ");

	printf("\n吝困 款青 : ");
	inOrder(a, 1); printf("\b\b  ");

	printf("\n饶困 款青 : ");
	postOrder(a, 1); printf("\b\b  ");

	return 0;
}