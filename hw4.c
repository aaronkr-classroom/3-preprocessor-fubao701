 //hw4.c
//숙제:슬라이드 71의 모든 질문 결과를 출력하는 프로그램을 작성하시오
#include<stdio.h>

int main(void) {
	int data = 5;
	int result = 0;

	result = data % 2;
	printf("result = %d, data = %d\n", result, data);

	result = data < 5;
	printf("result = %d, data = %d\n", result, data);

	result = data < 4 + 3;
	printf("result = %d, data = %d\n", result, data);

	result = data++ + 2;
	printf("result = %d, data = %d\n", result, data);

	result = data == 5;
	printf("result = %d, data = %d\n", result, data);

	result = data != 5 && (data = 0);
	printf("result = %d, data = %d\n", result, data);

	result = --result && (data = 0);
	printf("result = %d, data = %d\n", result, data);

	result = result-- && (data = 0);
	printf("result = %d, data = %d\n", result, data);

	result = result-- || (data = 0);
	printf("result = %d, data = %d\n", result, data);

	return 0;
}
