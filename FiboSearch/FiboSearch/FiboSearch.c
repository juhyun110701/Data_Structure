#include <stdio.h>
#include <limits.h>

int fiboSearch(int a[], int n, int key){
	int fibo[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };
	int k = 0, index = 0, pos;
	while (fibo[k] < n) k++;
	while (k>0){
		pos = index + fibo[--k];
		if (pos >= n || key < a[pos]);
		else if (key == a[pos]) return pos;
		else{
			index = pos;
			k--;
		}
	}
	return -1;
}

int main(void){
	int a[] = { 1,4,9,13,18,20,25,29,37,40,44,49,53,58,61,70,78,84,93,100 };
	int n = sizeof(a) / sizeof(n);
	int key;

	printf("값 : ");
	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	puts("");
	printf("찾을 값 : ");
	scanf_s("%d", &key);
	int pos=fiboSearch(a, n, key);
	printf("%d을 %d에서 찾음!\n", key, pos);
	return 0;
}