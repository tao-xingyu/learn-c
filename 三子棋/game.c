
#include"game.h"
//初始化数组
void InitBoard(char board[][3], int row, int col) {//定义一个二维数组,以及行列
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
	//memset(board,' ',row*col*sizeof(char));
}
//打印棋盘
void ShowBoard(char board[][3], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ",board[i][j]);//左右加入空格
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");

		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//玩家落子
void PlayerMove(char board[][3], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("请输入1-3的坐标: ");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = 'X';
				break;
			}
			else {
				printf("此位置已经被占用\n");
			}
			printf("坐标位置不合法\n");
		}
	}
}
//判断平局
static int IsFull(char board[][3], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;//没有满
			}
		}
	}
	return 1;//满了
}
//判断输赢情况
char IsWin(char board[][3], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		//行
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]
			&& board[i][0] != ' ') {
			return board[i][0];
		}
		//列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]
			&& board[0][i] != ' ') {
			return board[0][i];
		}
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2]
			&& board[0][0] != ' ') {
			return board[0][0];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0]
			&& board[0][0] != ' ') {
			return board[0][2];
		}
		//平局
		if (IsFull(board, row, col) == 1) {
			return 'Q';
		}
	}
	return ' '; //既没有赢,也没有平局
}
//电脑落子
void ComputerMove(char board[][3], int row, int col) {

	int x = 0;
	int y = 0;
	printf("电脑移动:\n");
	while (1) {
		x = rand() % row + 1;//3,[1-3]
		y = rand() % col + 1;
		if (board[x-1][y-1] == ' ') {
			board[x - 1][y - 1] = 'O';
			break;
		}
	}
}