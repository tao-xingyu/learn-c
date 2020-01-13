#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int Menu() {
	printf("========================\n");
	printf("1.开始一局游戏\n");
	printf("0.退出\n");
	printf("========================\n");
	printf("请输入您的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game() {

	int to_guess = rand() % 100 + 1;
	while (1) {
		printf("请输入您猜的数字: ");
		int num = 0;
		scanf("%d", &num);
		if (num < to_guess) {
			printf("低了!\n");
		}
		else if (num > to_guess) {
			printf("高了! \n");
		}
		else {
			printf("猜对了\n");
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