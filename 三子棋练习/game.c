#include"game.h"
void Initboard(int board[][3], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
void Showboard(char board[][3]) {
	int i;
	printf(" ---|---|---\n");
	for (i = 0; i < 3; i++) {
		printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
		printf(" ---|---|---\n");
	}
}
void PlayerMove(int board[][3], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("�������������:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {
			if (board[x - 1][y - 1] = ' ') {
				board[x - 1][y - 1] = 'X';
				break;
			}
		    else {
			printf("��λ���ѱ�ռ��\n");
		    }
		    printf("�������겻�Ϸ�\n");
		}
	}
}
void ComputerMove(int board[][3], int row, int col) {
	int x = 0;
	int y = 0;
	printf("�����ƶ�:");
	while (1) {
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x - 1][y - 1] = ' ') {
			board[x - 1][y - 1] = 'O';
			break;
		}
	}
}

