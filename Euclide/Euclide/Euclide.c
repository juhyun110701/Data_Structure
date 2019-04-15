#include <stdio.h>
int main(void){
	int m, n, r, t;
	printf("두 양의 정수 입력 : ");
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
	printf("최대공약수 : %d\n", n);
	return 0;
}