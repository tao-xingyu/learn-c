#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//单词加密解析
//int main() {
//	int i;
//	char ch_lower, ch_upper;
//	for (i = 1; i <= 6; i++) {
//		scanf("%c", &ch_lower);
//		if (ch_lower >= 'a'&&ch_lower <= 'z')
//			ch_upper = ch_lower - 'a' + 'A';//大小写字母互换
//		printf("%c->%c->%d\n", ch_lower, ch_upper, ch_upper % 10);//%10是求出对应字母ASCII码的余数
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
//			sum = sum +a[i];//求和
//	}
//		average = sum / 10;//求平均数
//		printf("average = %.2f\n", average);
//		printf(">average:");大于平均数的数字
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
//		day = day + tab[leap][k];//闰年与否的K月的天数
//	}
//	return day;
//}
//int main() {
//	int year, month, day;
//	printf("输入年月日:");
//	scanf("%d%d%d",&year,&month,&day);
//	day = day_of_year(year, month, day);//调用函数
//	printf("%d", day);
//	system("pause");
//	return day;
//}