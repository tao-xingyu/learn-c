#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//���ʼ��ܽ���
//int main() {
//	int i;
//	char ch_lower, ch_upper;
//	for (i = 1; i <= 6; i++) {
//		scanf("%c", &ch_lower);
//		if (ch_lower >= 'a'&&ch_lower <= 'z')
//			ch_upper = ch_lower - 'a' + 'A';//��Сд��ĸ����
//		printf("%c->%c->%d\n", ch_lower, ch_upper, ch_upper % 10);//%10�������Ӧ��ĸASCII�������
//	}
//	system("pause");
//	return 0;
//}

//int main() {
//	int c1 = 0, c2 = 0;
//	char ch;
//	while((ch=getchar())!='#')
//		switch (ch) {
//		case 'a':
//		case 'h':c1++;
//		default:c2++;
//		}
//	printf("c1=%d,c2=%d\n", c1, c2);
//	system("pause");
//	return 0;
//}

//int  main() {
//	int i;
//	double average,sum;
//	int a[10];
//	printf("Enter 10number:");
//	sum = 0;
//		for (i = 0; i < 10; i++) {
//			scanf("%d", &a[i]);
//			sum = sum +a[i];//���
//	}
//		average = sum / 10;//��ƽ����
//		printf("average = %.2f\n", average);
//		printf(">average:");����ƽ����������
//		for (i = 1; i < 10; i++) {
//			if (a[i] > average) {
//				printf("%d ", a[i]);
//			}
//		}
//		printf("\n");
//		system("pause");
//		return 0;
//}

//int day_of_year(int year, int month, int day) {
//	int k, leap;
//	int tab[2][13] = { 
//	{0,31,28,31,30,31,30,31,31,30,31,30,31},
//	{0,31,29,31,30,31,30,31,31,30,31,30,31} };
//	leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
//	for (k = 1; k < month; k++) {
//		day = day + tab[leap][k];//��������K�µ�����
//	}
//	return day;
//}
//int main() {
//	int year, month, day;
//	printf("����������:");
//	scanf("%d%d%d",&year,&month,&day);
//	day = day_of_year(year, month, day);//���ú���
//	printf("%d", day);
//	system("pause");
//	return day;
//}