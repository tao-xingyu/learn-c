#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
//#include <stdlib.h>
////��ӡ100-200֮�������
//int main() {
//	int i, j, count;
//	for (i = 100; i <= 200; i++) {
//		for (j = 2; j <= i; j++) {
//			if (i%j == 0) {
//				count = 0;
//				break;
//			}
//		}
//		if (i == j) {
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
////���9*9�˷��ھ���
//int main() {
//	int i, j;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%2d*%d=%d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

////�ж�1000-2000֮�������
//int main() {
//	int year,count;
//	count = 0;
//	for (year = 1000; year <= 2000; year++) {
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//			count++;
//			printf("%d\n",year);
//		}
//	}
//	system("pause");
//	return 0;
//}

//��abc���Ӵ�С��˳�����
int main(){
	int a, b, c, t;
	printf("Enter number:");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (a > c) {
		t = a;
		a = c;
		c = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	printf("%d%d%d", c, b, a);
	system("pause");
	return 0;
}