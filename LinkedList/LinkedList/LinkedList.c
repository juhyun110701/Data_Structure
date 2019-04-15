#include <stdio.h>
#include <stdlib.h>
int main(void){
	struct node{
		char data;
		struct node *link;
	};
	
	struct node *head, *p;
	//head는 고정 p는 늘어나게
	char ch;
	printf("1 문자 입력 : ");
	scanf_s("%c", &ch, 1);//1:길이(문자 한개 입력)
	getchar();	//그 다음 scanf에 엔터키 누른 것이 들어가지 않게 하기 위해서
	head = (struct node*)malloc(sizeof(struct node));
	//(struct node*)malloc(sizeof(struct node)); : 주소를 구해서 head에 넣어준다
	p = head;
	p->data = ch;	//data에 입력받은 ch넣기
	do{
		printf("1 문자 입력 : ");
		scanf_s("%c", &ch, 1);	
		getchar(); 
		if (ch == '0')
			break;
		p->link = (struct node*)malloc(sizeof(struct node));
		//p는 별1/ p->link는 별2/ p는 별2로 바뀜/
		p = p->link;
		p->data = ch;
	} while (1);
	p->link = NULL;	//맨 마지막 칸에
	//head는 소유중(?)
	p = head;
	while (p != NULL){
		printf("%c  ", p->data);
		p = p->link;
	}
	return 0;
}