//put.c
#include<stdio.h>

#define EN_MSG "I'm sleepy."
#define KO_MSG "��� �� �װڴ�~"

int main(void) {
	//0.printf() ���� ���ڿ� ����ϱ�
	printf("Using printf():%s", EN_MSG);

	//1.puts() ���ڿ� ����ϱ�
	puts("\nUsing puts():");
	puts(KO_MSG); //�ٹٲ� �ִ�

	//2.putchar() ���� ����ϱ�
	puts("\nUSing putchar():");
	for (int i= 0; EN_MSG[i] != '\0'; i++) {
		putchar(EN_MSG[i]); //putchar(i) = putc(i,stdout)
	}

	//3.putc()
	puts("\nUsing putc():");
	for (int i = 0; KO_MSG[i] != '\0'; i++) {
		putc(KO_MSG[i], stdout);
	}
	return 0;
}