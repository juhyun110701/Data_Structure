#include <stdio.h>
int main(void){
	int m, n, r, t;
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &m, &n);

	if (m < n){
		t = m;
		m = n;
		n = t;
	}

	while ((r = m%n) != 0){
		m = n;
		n = r;
	}
	printf("�ִ����� : %d\n", n);
	return 0;
}