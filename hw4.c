 //hw4.c
//����:�����̵� 71�� ��� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
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
