//num_malloc.c
#include <stdio.h>
#include <malloc.h>

#define MAX_COUNT 5//�ִ��Է°���

int main() {
	int num[MAX_COUNT],
		count = 0,
		sum = 0,
		limit = 0,
		i;
	printf("����� �ִ밳���� �Է��ϼ���: ");
	scanf_s("%d", &limit);

	p_num_list = (int*)malloc(sizeof(int) * limit);

	while (count < limit) {
		printf("Enter number (if enter9999 exit): ");
		//scanf_s("%d",&num[count]); same
		scanf_s("%d", p_num_list + count);

		if (p_num_list + count == 9999) break;

		count++;//�Է�Ƚ�� ���
	}

	//�Է� �� Ƚ�� ��ŭ ���ڸ� ���
	for (i = 0; i < count; i++) {
		if (i > 0) printf(" + ");
		printf("%d", *(p_num_list+i));
		sum = sum + *(p_num_list + i);
	}

	printf(" = %d\n", sum);

}