//memory.c
#include <stdio.h>

//전역변수
int* BP, * SP;//Base Pointer, Stack Pointer 시뮬레이션
int stack[1024];//(int)4bit*1024(스택배열)
int stackIndex = 0;//스택 포인터 시뮬레이션

void Show() {
	printf("---------------------------------------------\n");
	printf("현재 스택 상태(Top -> Bottom):\n");
	for (int i = stackIndex - 1; i >= 0; i--) {
		int* addr = (int*)stack[i];
		int actualValue = *addr;
		printf("스택[%d]: %p (주소값) %d (실제값)\n", i, stack[i]);
	}
	printf("Base Pointer (BP): %p\n", (void*)BP);
	printf("Stack Pointer (SP): %p\n", (void*)SP);
	printf("---------------------------------------------\n");
}
//스택 푸쉬
void push(int value) {
	stack[stackIndex++] = value;
	SP = &stack[stackIndex];
}

//스택 팝 함수
void pop() {
	if (stackIndex>0) {
		SP = &stack[--stackIndex];
		return stack[stackIndex];
	}
	return -1;//stack 에서 값이없다.
}

void Test(int a, int b, int c) {
	int x = a + b;
	int y = b + c;
	int z = c + a;

	printf("Test() 함수 진입 - 스택 프레임 생성\n");
	//push((int)BP);
	BP = &stack[stackIndex - 3];
	//현재 스택 프레임 푸시
	push((int)&x);
	push((int)&y);
	push((int)&z);

	Show();

	printf("Test() 함수 반환 - 스택 프레임 해제 \n");
	pop(); pop(); pop();
	BP = &stack[stackIndex + 3];//이전 BP복원

	Show();
}

int main(void) {
	//메인함수의 지역변수
	int a = 10,
		b = 20,
		c = 30;

	printf("Main()함수 시작 - 초기 스택상태\n");
	//초기 스택 푸시 (가정)
	push((int)&a);
	push((int)&b);
	push((int)&c);

	BP = &stack[0];
	Show();

	printf("Test() 함수 호출\n");
	Test(a, b, c);

	printf("Main() 함수 종료 - 스택 상태 복구\n");
	pop(); pop(); pop();
	Show();

	return 0;
}
