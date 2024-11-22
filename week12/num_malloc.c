//num_malloc.c
#include <stdio.h>
#include <malloc.h>

#define MAX_COUNT 5//최대입력개수

int main() {
	int num[MAX_COUNT],
		count = 0,
		sum = 0,
		limit = 0,
		i;
	printf("사용할 최대개수를 입력하세요: ");
	scanf_s("%d", &limit);

	p_num_list = (int*)malloc(sizeof(int) * limit);

	while (count < limit) {
		printf("Enter number (if enter9999 exit): ");
		//scanf_s("%d",&num[count]); same
		scanf_s("%d", p_num_list + count);

		if (p_num_list + count == 9999) break;

		count++;//입력횟수 계산
	}

	//입력 된 횟수 만큼 숫자를 출력
	for (i = 0; i < count; i++) {
		if (i > 0) printf(" + ");
		printf("%d", *(p_num_list+i));
		sum = sum + *(p_num_list + i);
	}

	printf(" = %d\n", sum);

}