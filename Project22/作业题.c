#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

//交换数组A和数组B的值
//int main() {
//	int i = 0;
//	int temp = 0;
//	int a[] = { 1,2,3,4,5,6, };
//	int	b[] = { 6,7,8,9,10,11 };
//	for (i = 0; i < 6; i++) {
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	for (i = 0; i < 6; i++) {
//		printf("%2d",a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 6; i++) {
//		printf("%2d",b[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
//int main() {
//	int i, sign;
//	double sum, deno,item;
//	sum = 0;
//	sign = 1;
//	for (i = 1; i <= 100;++i) {
//		deno = i;
//		item =sign / deno;
//		sum = sum + item;
//		sign = -1;
//	}
//	printf("sum = %lf\n", sum);
//	system("pause");
//	return 0;
//}
//
// 编写程序数一下1到 100 的所有整数中出现多少个数字9
//int main() {
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	printf("9的个数有:%d\n", count);
//	system("pause");
//	return 0;
//}


////打印1-100的奇数
//int main() {
//	int i;
//	i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 != 0) {
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//100以内的素数
//#include <math.h>
//int main() {
//	int m,i,count;
//	double n;
//	count = 0;
//	for (m = 2; m <= 100; m++) {
//		n = sqrt(m);
//		for (i = 2; i <= n; i++) {
//			if (m%i == 0) {
//				break;
//			}
//		}
//		if (i > n) {
//			printf("%d ", m);
//			count++;
//			if (count % 10 == 0) {
//				printf("\n");
//			}
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//从输入的10个成绩中选出最高的分数
//int main() {
//	int max, num,i;
//	printf("Enter number:");
//	scanf("%d",&num);
//	max = num;
//	for (i = 1; i < 10; i++) {
//		scanf("%d",&num);
//		if (num > max) {
//			max = num;
//		}
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}

//求n和m的值
//int main() {
//	int n = 1;
//	int m = 2;
//	switch (n) {
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n) {//继续带入n的值，此时n=2
//		case 1:n++;
//		case 2:m++;
//			   n++;
//			   break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	system("pause");
//	return 0;
//}

//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	switch (input) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	default:
//		printf("您的时输入有误\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}

////将任意正整数逆序输出
//int main() {
//	int m;
//	printf("Enter number:");
//	scanf("%d", &m);
//	while (m != 0) {
//		printf("%d", m % 10);
//		m = m / 10;
//	}
//	system("pause");
//	return 0;
//}

////求1！+2!+3!+.....+100!的值
//double fact(int n) {
//	int i;
//	double result;
//	result = 1;
//	for (i = 1; i <= n; i++) {
//		result = result * i;
//	}
//	return result;
//}
//int main() {
//	int i;
//	double sum;
//	sum = 0;
//	for (i = 1; i <= 100; i++) {
//		sum = sum + fact(i);
//	}
//	printf("%e\n", sum);
//	system("pause");
//	return 0;
//}

////接上面，使用嵌套循环
//int main() {
//	int i, j;
//	double sum, item;
//	sum = 0;
//	for (i = 1; i <= 100; i++) {
//		item = 1;
//		for (j = 1; j <= i; j++) {
//			item = item * j;
//			sum = sum + item;
//		}
//	}
//	printf("%e\n", sum);
//	system("pause");
//	return 0;
//}

