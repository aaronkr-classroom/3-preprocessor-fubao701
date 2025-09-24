//rps.c
//Rock-Paper-Scissors!
#include<stdio.h>
#include<stdlib.h> // srand()
#include<time.h> // time() = 1970��1��1��0:00�ú��� �и��� ��
                 // time() = 812613454183ms
// ��� ����
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

// ��� �Լ� ����
#define WIN printf("\nYou WIN!~~\n")
#define LOSE printf("\nYou lose �Ф�\n")
#define TIE printf("\nYou tie...\n")

// �Լ� ���� ����
void play_game(int user_choice, int comp_choice);
void print_choice(int choice);

int main(void) {
	int user_choice, comp_choice;

	// ���� ����
	srand(time(0));

	// ����� ����
	printf("Welcome to RPS!\n");
	printf("Choose your move:\n");
	printf("1-ROCK\n");
	printf("2-PAPER\n");
	printf("3-SCISSORS\n");
	printf("Choice:>>>");
	scanf_s("%d", &user_choice); // & = ����

	// AI ����
	comp_choice = (rand() % 3) + 1; //(0+2)+1

	printf("\nYou chose: ");
	print_choice(user_choice);
	printf("AI chose:" );
	print_choice(user_choice);

	play_game(user_choice, comp_choice);
	return 0;
}

void play_game(int user_choice, int comp_choice) {
	if (user_choice == comp_choice) TIE;
	else if (
		(user_choice==ROCK && comp_choice==SCISSORS)||
		(user_choice==PAPER && comp_choice==ROCK)||
		(user_choice==SCISSORS && comp_choice==PAPER)
		) WIN;
	else LOSE;
}

void print_choice(int choice) {
	if (choice == ROCK) printf("Rock\n"); // choice == 1
	else if (choice == PAPER) printf("Paper\n"); // choice ==2
	else if (choice == SCISSORS) printf("Scissors\n"); // choice ==3
	else printf("Error: incorrect choice!");
}
