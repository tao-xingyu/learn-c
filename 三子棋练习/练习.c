#include"game.h"


void menu() {
	printf("********************\n");
	printf("********************\n");
	printf("********1.play******\n");
	printf("********0.exit******\n");
	printf("********************\n");
	printf("********************\n");
}
void game() {
	char ret = 0;
	char board[3][3] = { 0 };
	Initboard(board, 3, 3);
	Showboard(board);
	while (1) {

	}
}
int main() {
	int input = 0;
	do {
		printf("请输入你的操作:");
		scanf("%d", &input);
		menu();
		switch (input) {
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("您的输入有误,请重新输入\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
