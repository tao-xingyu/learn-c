//#include"game.h"
//void menu() {
//	printf("******************\n");
//	printf("******************\n");
//	printf("*******1.play*****\n");
//	printf("*******0.exit*****\n");
//	printf("******************\n");
//	printf("******************\n");
//}
//void game() {
//	char ret = 0;
//	char board[3][3] = { 0 };
//	InitBoard(board, 3, 3);
//	ShowBoard(board, 3, 3);
//	while (1) {
//		PlayerMove(board, 3, 3);
//		ret = IsWin(board, 3, 3);
//		if (ret != ' ') {
//			break;//���ʤ������ƽ��
//		}
//		ShowBoard(board, 3, 3);
//		ComputerMove(board, 3, 3);
//		ret = IsWin(board, 3, 3);
//		if (ret != ' ') {
//			break;//����ʤ������ƽ��
//		}
//		ShowBoard(board, 3, 3);
//	}
//	if (ret == 'Q') {
//		printf("ƽ��\n");
//	}
//	else if(ret=='X'){
//		printf("���ʤ��\n");
//	}
//	else if (ret == 'O') {
//		printf("����ʤ��\n");
//	}
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));//�������,ʱ���
//	do {
//		menu();
//		printf("��������Ĳ���:");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ�˳�\n");
//			break;
//		default:
//			printf("��������ȷ������\n");
//			break;
//		}
//
//	} while (input);
//
//	system("pause");
//	return 0;
//}
//                        