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
	int a[] = { 9, 10, 17, 30, 37, 41, 55, 56, 90, 99, 100 };		//데이터는 정렬된 데이터를 사용해야 함
	int n = sizeof(a) / sizeof(int);
	int key, index;

	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	printf("\n찾을 데이터 : ");
	scanf_s("%d", &key);
	index = binarySearch(a, n, key);
	if (index == -1) printf("찾고자 하는 데이터  없음\n");
	else printf("%d을(를) %d에서 찾음!\n", key, index);
	return 0;
}