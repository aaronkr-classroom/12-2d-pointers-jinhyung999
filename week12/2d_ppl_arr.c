//2d_ppl_arr.c
#include <stdio.h>

int main(void) {
	//����
	int age, member, temp, sum;
	//20�� 4��,30�� 2��,40�� 3��
	unsigned char limit_table[3] = { 4,2,3 };
	//�����̸�Ű�� Ƚ�� ������ �迭
	unsigned char count[3][4];

	for (age = 0; age < 3; age++) {
		//�������� ��������Ű�� Ƚ����� �����
		printf("\n%d0�� ������ ��������Ű�� ȸ��\n", age+ 2);
		
		for (member = 0; member < limit_table[age]; member++) {
			printf("#%d: ",member + 1);

			//�����̸�Ű�� Ƚ���� ������ �Է��ϱ�
		}
	}

	printf("\n\n���ɺ� ��� �����̸�Ű�� Ƚ��\n");
	for (age = 0; age < 3; age++) {
		sum = 0;

		printf("%d0��", age + 2);

		for (member = 0; member < limit_table[age]; member++) {
			sum = sum + count[age][member];
		}

		printf("%5.2f\n", (double)sum / limit_table[age]);
	}
}