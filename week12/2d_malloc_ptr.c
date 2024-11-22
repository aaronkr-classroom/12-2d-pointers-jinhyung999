//2d_malloc_ptr.c
#include <stdio.h>

int main(void) {
	short** pp;
	//4바이트 할당 두번째 상자
	pp = (short**)malloc(sizeof(short*));
	//2바이트할당 세번째 상자
	*pp = (short*)malloc(sizeof(short));
	//2차원 포인터를 사용하여 세번째 상자에 10을 대입
	**pp = 10;
	printf("**pp: %d\n", pp);//10

	free(*pp);//세번째 메모리 해제
	free(pp);//두번째 메모리 해제

	return 0;
}