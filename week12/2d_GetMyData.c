//GetMyData.c
#include <stdio.h>
#include <malloc.h>

void GetMyData(int** q) {
	//�Ҵ�� �޸��� �ּ� ���� ������ q�� ����Ű�� main
}
int main(void) {
	int* p;
	GetMyData(&p);
	*p = 5;
	printf("*p: %d", p);
	free(p);

	return 0;
}