#include<stdio.h>
#include<stdlib.h>
#if 0
int main() {
	int i, j;
	int n = 7;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = n; i > 0; i--) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
int fei(int num) {
	if (num == 1||num ==2) {
		return 1;
	}
	else {
		return fei(num - 1) + fei(num - 2);
	}
}
int main() {
	int n = 5;
	int ret;
	ret = fei(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
#endif

int main() {
	int i,n;
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	printf("Enter n:");
	scanf("%d", &n);
	for (i = 3; i <= n; i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("第%d个斐波那契数为%d\n", n, f3);
	system("pause");
	return 0;
}
