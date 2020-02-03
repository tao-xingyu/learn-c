#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
//交换两个整型变量的值
int main() {
	int t;
	int x = 10;
	int y = 20;
	t = x;
	x = y;
	y = t;
	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}

//不创建临时变量，交换两个数的值
int main() {
	int x = 10;
	int y = 20;
	x ^= y ^= x ^= y;
	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}

//求10个数中的最大值
int Max(int a[10], int len) {
	int i;
	int max = a[0];
	//len = sizeof(a) / sizeof (a[0]);
	for (i = 0; i < len; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
int main() {
	int num[10];
	printf("Enter num[10]:");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	printf("max = %d\n", Max(num, 10));
	system("pause");
	return 0;
}

//将三个数按从大到小大顺序输出
int main() {
	int x, y, z, t;
	printf("Enter num:");
	scanf("%d %d %d", &x, &y, &z);
	if (x < y) {
		t = x;
		x = y;
		y = t;
	}
	if (x < z) {
		t = x;
		x = z;
		z = t;
	}
	if (y < z) {
		t = y;
		y = z;
		z = t;
	}
	printf("从大到小输出：%d %d %d\n",x,y,z);
	system("pause");
	return 0;
}

//两个数的最大公约数
int main() {
	int a, b,i;
	printf("Enter num:");
	scanf("%d %d", &a, &b);
	if (a > b) {
		for (i = a; i >= 1; i--) {
			if ((a%i == 0)&&(b%i == 0)) {
				printf("%d\n", i);
				break;
			}
		}
	}
	else {
		for (i = b; i >= 1; i--) {
			if ((a%i == 0) && (b%i == 0)) {
				printf("%d\n", i);
				break;
			}
		}
	}
	system("pause");
	return 0;
}