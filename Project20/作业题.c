#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
//�����������ͱ�����ֵ
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

//��������ʱ������������������ֵ
int main() {
	int x = 10;
	int y = 20;
	x ^= y ^= x ^= y;
	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}

//��10�����е����ֵ
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

//�����������Ӵ�С��˳�����
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
	printf("�Ӵ�С�����%d %d %d\n",x,y,z);
	system("pause");
	return 0;
}

//�����������Լ��
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