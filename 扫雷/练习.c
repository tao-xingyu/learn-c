#include"game.h"
void menu() {
	printf("*********ɨ��********\n");
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
		printf("��������Ĳ���:");
		scanf("%d", &input);
		switch(input){
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("��������,����������\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}





