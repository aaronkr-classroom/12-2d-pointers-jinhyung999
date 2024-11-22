//GetMyData.c
#include <stdio.h>
#include <malloc.h>

void GetMyData(int** q) {
	//할당된 메모리의 주소 값을 포인터 q가 가르키는 main
}
int main(void) {
	int* p;
	GetMyData(&p);
	*p = 5;
	printf("*p: %d", p);
	free(p);

	return 0;
}