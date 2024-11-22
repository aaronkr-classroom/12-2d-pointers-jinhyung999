//name_malloc.c
#include <stdio.h>
#include <malloc.h>

int main(void) {
	char* p_name;
	p_name = (char*)malloc(20);// 20byte memory 동적할당
	if (p_name != NULL) {
		printf("Enter your name: ");
		gets(p_name);
		printf("Hi~~ %s\n", p_name);
		free(p_name);
		//포인터 변수에 동적할당된 메모리 해제
	}
	else {
		printf("Memory allocation error!!");
	}
	return 0;
}