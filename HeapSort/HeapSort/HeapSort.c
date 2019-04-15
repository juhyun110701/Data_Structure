#include <stdio.h>

void HeapSort(int a[], int n){
	int i, value, parent, child;
	for (i = n / 2; i >= 1; i--){
		value = a[i];
		parent = i;
		while ((child = parent * 2) <= n){
			if (child + 1 <= n && a[child] < a[child + 1]) child++;
			if (value >= a[child]) break;
			a[parent] = a[child];
			parent = child;
		}
		a[parent] = value;
	}

		while (n>1){
			value = a[n];
			a[n--] = a[1];
			parent = 1;
			while ((child = parent * 2) <= n){
				if (child + 1 <= n && a[child] < a[child + 1])child++;
				if (value >= a[child]) break;
				a[parent] = a[child];
				parent = child;
			}//while
			a[parent] = value;
		}//while
}//HeapSort

int main(){
	int a[] = { -1, 9, 33, 5, 10, 27, 21, 1, 13, 20,2 };
	int n = sizeof(a) / sizeof(int);
	
	printf("정렬 전 : ");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n정렬 후 : ");
	HeapSort(a, n - 1);
	for (int j = 0; j < n; j++)
		printf("%d ", a[j]);
	printf("\n");
	return 0;
}