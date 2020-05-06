#include <stdio.h>

int main() {
	char cntArr[10] = { 0, };	
	int a, b, c;
	int mul;

	scanf("%d %d %d", &a, &b, &c);
	mul = a * b * c;

	while (mul != 0) {
		cntArr[mul % 10]++;
		mul /= 10;
	}
    printf("\n");
    
	for (int i = 0; i < 10; i++) {
		printf("%d\n", cntArr[i]);
	}

	return 0;
}