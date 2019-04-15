#include <stdio.h>
#include <stdlib.h>

void mergeSort(int a[], int left, int mid, int right){
	int i = left, j = mid+1, k = 0;
	int *result = (int *)malloc(sizeof(int)*(right - left + 1));
	while (i <= mid&&j <= right){
		if (a[i] < a[j]) result[k++] = a[i++];
		else result[k++] = a[j++];
	}
	if (i>mid) while (j <= right) result[k++] = a[j++];
	else while (i <= mid) result[k++] = a[i++];
	k = 0;
	for (i = left; i <= right; i++) a[i] = result[k++];
	free(result);
}

void divide(int a[], int left, int right){
	int mid;
	if (left < right){
		mid = (left + right) / 2;
		divide(a, left, mid);
		divide(a, mid + 1, right);
		mergeSort(a, left, mid, right);
	}
}

int main(void){
	int a[] = { 10, 4, 22, 8, 1, 18, 13, 5, 20, 2, 6, 25, 31 };
	int i, n = sizeof(a) / sizeof(int);
	printf("정렬 전 : ");
	for(i=0; i<n; i++)	printf("%d ", a[i]);
	
	divide(a, 0, n - 1);
	printf("\n정렬 후 : ");
	for (i = 0; i < n; i++) printf("%d ", a[i]);
	puts("");
	return 0;
}