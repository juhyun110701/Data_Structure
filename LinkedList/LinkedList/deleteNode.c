#include <stdio.h>
#include <stdlib.h>

struct node
{
	char data;
	struct node *link;
};
void deleteNode(struct node *p){
	if (p != NULL){
		deleteNode(p->link);
		free(p);
	}
}

int main(int argc, char *argv[])
{
	struct node *p, *head;
	char ch;
	printf("1. 문자 입력 : ");
	scanf_s("%c", &ch, 1); //한문자만 입력 ,1
	getchar();
	head = (struct node*)malloc(sizeof(struct node));
	p = head;
	p->data = ch;
	do
	{
		printf("1. 문자 입력 : ");
		scanf_s("%c", &ch, 1);
		getchar();
		if (ch == '0') break; // 0 -> '0'
		p->link = (struct node*)malloc(sizeof(struct node));
		p = p->link;
		p->data = ch;
	} while (1);
	p->link = NULL;
	p = head;
	while (p != NULL) {
		printf("%c ", p->data);
		p = p->link;
	}
	p = head;
	deleteNode(p);
	return 0;
}