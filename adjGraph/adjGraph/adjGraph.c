#include <stdio.h>
#define SIZE 10
void main(void){
	int graph[SIZE][SIZE] = { 0, };
	int i, j, vertex, edge, e1, e2;

	printf("\n���� ���� : ");
	scanf_s("%d", &vertex);
	printf("\n���� ���� : ");
	scanf_s("%d", &edge);
	for (i = 0; i < edge; i++){
		printf("\n���� ���� ��ȣ : ");
		scanf_s("%d", &e1);
		printf("\n ���� �� ��ȣ : ");
		scanf_s("%d", &e2);
		graph[e1][e2] = 1;
	}
	printf("\n\n���� ���\n\n");
	for (i = 0; i < vertex; i++){
		for (j = 0; j < vertex; j++)
			printf("%5d", graph[i][j]);
		printf("\n");
	}
}