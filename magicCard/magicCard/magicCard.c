#include <stdio.h>
enum bool{ false, true };

int main(void) {
	int n = 31, i, j, k = 1, cnt = 0;
	char answer;
	enum bool b[8] = { false };

	printf("0 ~ %d�� ���ڸ� �����ϼ���!\n", n);

	for (i = 0; i < 5; i++) { //�ݺ�Ƚ���� (int)(log2 n) + 1
		printf("\n\t%d ��° ī��\n\n", i + 1);
		for (j = 0; j <= n; j++) { //�ݺ�Ƚ���� (n + 1)
			if ((j & k) == k) {
				printf("%d\t", j);
				cnt++;
				if (cnt % 4 == 0)printf("\n");
			}
		}
		printf("\n������ ���ڰ� ������ y, ������ n�Է�: ");
		scanf_s("%c", &answer, 1);
		getchar();

		if (answer == 'y') b[i] = 1;
		else b[i] = 0;

		cnt = 0;
		k *= 2;

	}

	k = 1;
	answer = 0;
	for (i = 0; i < 5; i++) {
		if (b[i] == 1) answer += k;
		k *= 2;
	}
	printf("\n������ ���ڴ� %d�Դϴ�.\n\n", answer);

	return 0;
}