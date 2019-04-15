#include <stdio.h>
//int level = 0;

void QuickSort(int a[], int left, int right) {
	int i, j, k, pivot, temp;
	
	//level++;
	if (left < right) {
		i = left;
		j = right;
		pivot = a[left];
		while (i < j) {
			while (i < right && a[i] <= pivot) i++;
			while (j > left && a[j] >= pivot) j--;
			if (i < j) {
				temp = a[i]; a[i] = a[j]; a[j] = temp;
			}
		}
		a[left] = a[j];
		a[j] = pivot;

		/*printf("단계 %d, left %2d ~ right %2d: [", level, left, right);
		for (k = left; k <= right; k++) {
			if (k == j) printf("] %d [", a[k]);
			else k == left || k == j + 1 ? printf("%d", a[k]) : printf("%4d", a[k]);
		}
		printf("]\n");*/

		QuickSort(a, left, j - 1);
		QuickSort(a, j + 1, right);
	}
	//level--;
}

int main(void) {
	int a[] = { 5,21,1,19,17,13,25,3,36,10};
	int i, n;

	n = sizeof(a) / sizeof(int);

	printf("정렬전: ");
	for (i = 0; i < n; i++) printf("%4d", a[i]);
	printf("\n\n");

	QuickSort(a, 0, n - 1);

	printf("\n정렬후: ");
	for (i = 0; i < n; i++) printf("%4d", a[i]);
	printf("\n\n");

	return 0;
}