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
		printf("��������Ĳ���:");
		scanf("%d", &input);
		menu();
		switch (input) {
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������������,����������\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
