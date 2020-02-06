#include"game.h"
void menu() {
	printf("*********扫雷********\n");
	printf("*********************\n");
	printf("*********1.play******\n");
	printf("*********0.exit******\n");
	printf("*********************\n");
	printf("*********************\n");
}
void game() {
	char mine[ROWS][COLS] = { 0 };
	char mineinfo[ROWS][COLS] = { 0 };

	Initboard(mine, ROWS,COLS, '0');
	Initboard(mineinfo, ROWS,COLS, '*');
	Showboard(mineinfo, ROW, COL);
	Setmine(mine, ROW, COL);
	Findmine(mine, mineinfo, ROW, COL);
}
int main() {
	int input = 0;
	do {
		menu();
		printf("请输入你的操作:");
		scanf("%d", &input);
		switch(input){
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入有误,请重新输入\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}





