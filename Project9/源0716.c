#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int Menu() {
	printf("========================\n");
	printf("1.��ʼһ����Ϸ\n");
	printf("0.�˳�\n");
	printf("========================\n");
	printf("����������ѡ��: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game() {

	int to_guess = rand() % 100 + 1;
	while (1) {
		printf("���������µ�����: ");
		int num = 0;
		scanf("%d", &num);
		if (num < to_guess) {
			printf("����!\n");
		}
		else if (num > to_guess) {
			printf("����! \n");
		}
		else {
			printf("�¶���\n");
			break;
		}
	}
}
int main() {
	srand((unsigned int)time);
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("doodbye\n");
			break;
		}
	}

	system("pause");
	return 0;
}