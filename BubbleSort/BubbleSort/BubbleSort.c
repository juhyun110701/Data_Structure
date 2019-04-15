#include <stdio.h>
#define LEN 8

void BubbleSort(int a[], int n){
	int i = 1, j, temp, chk = 1;
	while (chk == 1){
		chk = 0;
		for (j = 0; j < n - i; j++){
			if (a[j]>a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				chk = 1;
			}
		}
		i++;
	}
}

int main(void){
	int arr[] = { 17, 8, 20, 11, 5, 12, 15, 7 };
	printf("정렬 전 : ");
	for (int i = 0; i < LEN; i++)
		printf("%d ",arr[i]);
	printf("\n정렬 후 : ");
	BubbleSort(arr, LEN);
	for (int i = 0; i < LEN; i++)
		printf("%d ", arr[i]);
	puts("");
	return 0;
}