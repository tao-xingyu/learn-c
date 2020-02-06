#include"game.h"
void Initboard(char board[][COLS], int rows, int cols, char set) {
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;

		}
	}
}
void Showboard(char board[][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	printf("===================\n");
	for (i = 0; i <= row; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("==================\n");
}	
void Setmine(char mine[][COLS], int row, int col) {
	int x;
	int y;
	int count = 0;
	while (count < MINE_NUM) {
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0') {
			mine[x][y] = '1';
			count++;
		}
	}
}
static int  Getminecount(char mine[][COLS],int x,int y) {
	return mine[x - 1][y - 1] + mine[x - 1][y] +
		mine[x - 1][y + 1] + mine[x][y + 1] +
		mine[x + 1][y + 1] + mine[x + 1][y] +
		mine[x + 1][y - 1] + mine[x][y - 1] - 8 * '0';
}
void Findmine(char mine[][COLS], char mineinfo[][COLS], int row, int col) {
	int x;
	int y;
	int count = 0;
	while (count < row*col - MINE_NUM) {
		printf("����������:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9) {
			if (mine[x][y] == '1') {
				printf("�㱻ը����\n");
				Showboard(mine, row, col);

				break;
			}
			else {
				int ret = Getminecount(mine,x,y);//ͳ�Ƶ�ǰλ����Χ�м�����
				mineinfo[x][y] = ret + '0';
				Showboard(mineinfo, row, col);
				count++;
			}
		}
		    else {
			printf("���겻�Ϸ�\n");
		    }
	}

}