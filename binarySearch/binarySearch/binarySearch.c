#include <stdio.h>
int binarySearch(int a[], int n, int key){
	int mid, left = 0, right = n - 1;
	while (left <= right){
		mid = (left + right) / 2;
		if (key == a[mid]) return mid;
		if (key < a[mid]) right = mid - 1;
		else left = mid + 1;
	}
	return -1;
}

int main(void){
	int a[] = { 9, 10, 17, 30, 37, 41, 55, 56, 90, 99, 100 };		//�����ʹ� ���ĵ� �����͸� ����ؾ� ��
	int n = sizeof(a) / sizeof(int);
	int key, index;

	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	printf("\nã�� ������ : ");
	scanf_s("%d", &key);
	index = binarySearch(a, n, key);
	if (index == -1) printf("ã���� �ϴ� ������  ����\n");
	else printf("%d��(��) %d���� ã��!\n", key, index);
	return 0;
}