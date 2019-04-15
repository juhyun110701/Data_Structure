#include <stdio.h>

void ShellSort(int a[], int n){
	int t, i, j, key;
	for (t = n / 2; t > 0; t /= 2){
		for (i = t; i < n; i++){
			key = a[i];
			for (j = i - t; j >= 0; j-=t){
				if (key < a[j]) a[j + t] = a[j];
				else break;
			}
			a[j + t] = key;
		}
	}
}

int main(void){
	int a[] = { 7, 12, 1, 35, 3, 8, 23, 19 };
	int n = sizeof(a) / sizeof(int);
	int i;
	printf("정렬 전 : ");
	for (i = 0; i < n; i++) printf("%4d", a[i]);
	ShellSort(a, n);
	printf("\n정렬 후 : ");
	for (i = 0; i < n; i++) printf("%4d", a[i]);
	puts("");

	return 0;

}