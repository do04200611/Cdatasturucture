//pointerarthmetic 개념 정리

#include <stdio.h>
#define BUFFER_SIZE 100

int main() {
	int data[] = { 1,2,3 };


	int* p = &data[0];

	printf(" % d % x\n", p, p);
	printf(" % d % x\n", p+1, p+1);
	printf("%d %x\n", p + 2, p + 2);

	return 0;
}
