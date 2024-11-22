//2d_pointer.c
#include <stdio.h>

int main() {
	short data = 3,
		* p = &data,//data변수의 주소값을 1차원 포인터 p에저장함
		** pp = &p;// 1차원 포인터 p변수의 주소값을 2차원 포인터 pp에 저장함
	
	printf("[Before] data: %d\n", data);//3
	*p = 40;
	printf("[Use *p] data: %d\n", data);//40
	**pp = 500;//2차원 포인터 pp를 사용하여 data 변수 값을 500으로 수정
	printf("[Use **pp] data: %d\n", data);//500

	return 0;
}