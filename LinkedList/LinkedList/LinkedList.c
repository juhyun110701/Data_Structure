#include <stdio.h>
#include <stdlib.h>
int main(void){
	struct node{
		char data;
		struct node *link;
	};
	
	struct node *head, *p;
	//head�� ���� p�� �þ��
	char ch;
	printf("1 ���� �Է� : ");
	scanf_s("%c", &ch, 1);//1:����(���� �Ѱ� �Է�)
	getchar();	//�� ���� scanf�� ����Ű ���� ���� ���� �ʰ� �ϱ� ���ؼ�
	head = (struct node*)malloc(sizeof(struct node));
	//(struct node*)malloc(sizeof(struct node)); : �ּҸ� ���ؼ� head�� �־��ش�
	p = head;
	p->data = ch;	//data�� �Է¹��� ch�ֱ�
	do{
		printf("1 ���� �Է� : ");
		scanf_s("%c", &ch, 1);	
		getchar(); 
		if (ch == '0')
			break;
		p->link = (struct node*)malloc(sizeof(struct node));
		//p�� ��1/ p->link�� ��2/ p�� ��2�� �ٲ�/
		p = p->link;
		p->data = ch;
	} while (1);
	p->link = NULL;	//�� ������ ĭ��
	//head�� ������(?)
	p = head;
	while (p != NULL){
		printf("%c  ", p->data);
		p = p->link;
	}
	return 0;
}