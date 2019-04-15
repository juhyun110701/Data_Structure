#include <stdio.h>
void HanoiTower(int n, char a, char b, char c){
	if (n == 1)
		printf("%d, %c -> %c\n", n, a, c);
	else{
		HanoiTower(n - 1, a, c, b);	//B
		printf("%d, %c -> %c\n", n, a, c);	//M
		HanoiTower(n - 1, b, a, c);	//C
	}
}
int main(){
	int n = 4;
	char a = 'A', b = 'B', c = 'C';
	
	HanoiTower(n, a, b, c);

	return 0;
}