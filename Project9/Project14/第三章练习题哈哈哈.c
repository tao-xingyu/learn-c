#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
//int main() {
//	int x, y;
//	printf("Enter x:");
//	scanf("%d", &x);
//	if (x < 0) {
//		y = -1;
//	}
//	else if (x == 0) {//==才可以判断
//		y = 0;
//	}
//	else {
//		y = 1;
//	}
//	printf("y = %d\n", y);
//	system("pause");
//	return 0;
//}

////计算平均成绩，并统计合格人数
//int main() {
//	int n, i, count;
//	double grade, total;
//	printf("Enter n:");
//	scanf("%d",&n);
//	total = 0;
//	count = 0;
//	for (i = 1; i <= n; i++) {
//		printf("Enter grade#%d:", i);
//		scanf("%lf", &grade);
//		total = total + grade;
//		if (grade > 60) {
//			count++;
//		}
//	}
//	printf("Grade average = %.2f\n", total / n);
//	printf("Number of failures = %d\n", count);
//	system("pause");
//	return 0;
//}

////统计字符
//int main() {
//	int i, digit, letter, other;
//	char ch;
//	digit = letter = other = 0;
//	printf("Enter characters:");
//	for (i = 1; i <= 10; i++) {
//		ch = getchar();
//		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z')) {
//			letter++;
//		}
//		else if (ch >= '0'&&ch <= '9') {
//			digit++;
//		}
//		else {
//			other++;
//		}
//	}
//	printf("letter = %d,digit = %d,other = %d\n", letter, digit, other);
//	system("pause");
//	return 0;
//}

////输出闰年
//int main() {
//	int i, year;
//	//printf("Enter year:");
//	//scanf("%d",&year);
//	//if (year <= 2000 || year > 2100) {
//	//	printf("Invalid year!");
//	//}
//	//else if (year < 2004) {
//	//	printf("None");
//	//}
//	for (i = 2000; i<= 2100;i++) {
//		year = i;
//		if (((year % 4 == 0) && (year % 100 != 0))|| (year % 400 == 0)) {
//			printf("%d\n",year);
//		}
//	}
//	system("pause");
//	return 0;
//}

//成绩转换
//int main() {
//	int grade;
//	char A, B, C, D, E;
//	printf("Enter 100grade:");
//	scanf("%d",&grade);
//		if (grade >= 90) {
//			printf("A\n");
//		}
//		else if (grade < 90 && grade >= 80) {
//			printf("B\n");
//		}
//		else if (grade < 80 && grade >= 70) {
//			printf("C\n");
//		}
//		else if (grade < 70 && grade >= 60) {
//			printf("D\n");
//		}
//		else {
//			printf("E\n");
//		}
//	
//	system("pause");
//	return 0;
//}

////查询水果单价
//int main() {
//	int choice, i;
//	double price;
//	for (i = 1; i <= 5; i++) {
//		printf("[1]Select apples\n");
//		printf("[2]Select pears\n");
//		printf("[3]Select oranges\n");
//		printf("[4]Select grapes\n");
//		printf("[0]exit \n");
//		printf("Enter choice:");
//		scanf("%d", &choice);
//		if (choice == 0)
//			break;
//		switch (choice) {
//		case 1:price = 3.0; break;
//		case 2:price = 2.5; break;
//		case 3:price = 4.1; break;
//		case 4:price = 10.2; break;
//		default:price = 0.0; break;
//	}
//		printf("price = %.1f\n", price);
//	}
//	printf("Thanks\n");
//	system("pause");
//	return 0;
//}

//int main() {
//	int a, b, c, m;
//	printf("Enter number:");
//	scanf("%d%d%d", &a,&b,&c);
//	if (a > b) {
//		m = a;
//		a = b;
//		b = m;
//	}
//	if (a > c) {
//		m = a;
//		a = c;
//		c = m;
//	}
//	if (b > c) {
//		m = b;
//		b = c;
//		c = m;
//	}
//	printf("%d,%d,%d\n", a,b,c);
//	system("pause");
//	return;
//}

//int main() {
//	float x, z;
//	double b;
//	
//	printf("Enter x z:");
//	scanf("%f %f", &x,&z);
//	b = (x - z) / z;//除法必须是float或者double,int类型相除只能是整数
//	if (b < 0.1) {
//		printf("OK!");
//	}
//   else if ((b >= 0.1)&&(b <= 0.5)) {
//		printf("%.1f Ticket 200!",b);
//	}
//	else if(b > 0.5) {
//		printf("%.1f Licens Revoked!",b);
//	}
//	system("pause");
//	return 0;
//}


////冒泡排序
//void Swap(int* x, int* y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//void BubbleSort(int* arr, int size) {
//	for (int bound = 0; bound < size; ++bound) {
//		for (int cur = size - 1; cur > bound; --cur) {
//			if (arr[cur - 1] > arr[cur]) {//>为升序排列,<为降序排列
//				Swap( &arr[cur - 1] ,&arr[cur]);
//			}
//		}
//	}
//}
//int main() {
//	int arr[4] = { 9, 5, 2, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, size);
//	for (int i = 0; i < size; ++i) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

////出租车计价
//int main() {
//	int x, t,price,price1,price2;
//	x = 0;
//	t = 0;
//	printf("Enter x t:");
//	scanf("%d%d", &x, &t);
//	if (x <= 3) {
//		price1 = 10;
//		printf("price1 = %d\n", price1);
//	}
//	else if (x > 3 && x <= 13) {
//		price1 = 2 * x;
//		printf("price1 = %d\n", price1);
//	}
//	else {
//		price1 = 3 * x;
//		printf("price1 = %d\n", price1);
//	}
//	if (t >= 5) {
//		price2 = 2 * t / 5;
//		printf("price2 = %d\n", price2);
//	}
//	else {
//		price2 = 0;
//		printf(price2 = "%d\n", price2);
//	}
//	printf("price = %d\n", price1 + price2);
//	system("pause");
//	return 0;
//}

////判断三角形
//int main() {
//	float x1, x2, x3, y1, y2, y3;
//	printf("坐标1: ");
//	scanf("%f%f", &x1, &y1);
//	printf("坐标2: ");
//	scanf("%f%f", &x2, &y2);
//	printf("坐标3: ");
//	scanf("%f%f", &x3, &y3);
//	float a = 0; float b = 0;float c = 0;
//	float s, area, C;
//	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//	b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
//	c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
//	s = (a + b + c) / 2;
//	area = sqrt(s * (s - a)*(s - b)*(s - c));
//	C = a+b+c;
//	if (a + b > c&& a + c > b&& c + b > a) {
//		printf("%.2f  %.2f", C, area);
//	}
//	else {
//		printf("Impossible");
//	}
//	system("pause");
//	return 0;
//}

