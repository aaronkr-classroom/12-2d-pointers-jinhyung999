//2d_ppl_arr.c
#include <stdio.h>

int main(void) {
	//변수
	int age, member, temp, sum;
	//20대 4명,30대 2명,40대 3명
	unsigned char limit_table[3] = { 4,2,3 };
	//윗몸이르키기 횟수 저장할 배열
	unsigned char count[3][4];

	for (age = 0; age < 3; age++) {
		//각연력의 윗몸일으키기 횟수라고 출력함
		printf("\n%d0대 연령의 윗몸일으키기 회수\n", age+ 2);
		
		for (member = 0; member < limit_table[age]; member++) {
			printf("#%d: ",member + 1);

			//윗몸이르키기 횟수를 정수로 입력하기
		}
	}

	printf("\n\n연령별 평균 윗몸이르키기 횟수\n");
	for (age = 0; age < 3; age++) {
		sum = 0;

		printf("%d0대", age + 2);

		for (member = 0; member < limit_table[age]; member++) {
			sum = sum + count[age][member];
		}

		printf("%5.2f\n", (double)sum / limit_table[age]);
	}
}