#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#if 0
int main() {
	int n, i;
	double sum = 1;
	printf("Enter n:");
	scanf("%d", &n);
	for (i = 1; i = n; i++) {
		sum *= i;
	}
	printf("%lf", sum);
	system("pause");
	return 0;
}
int main() {
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	int n, i;
	printf("Enter n:");
	scanf("%d", &n);
	for (i = 3; i <= n; i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("%d\n", f3);
	system("pause");
	return 0;
}
int main() {
	char *str = "adfg";
	int len = 0;
	while (*str != '\0') {
		*str++;
		len++;
	}
	printf("%d\n", len);
	system("pause");
	return 0;
}


int main() {
	int A, B, C, D, E;
	for (A = 1; A <= 5; A++) {
		for (B = 1; B <= 5; B++) {
			for (C = 1; C <= 5; C++) {
				for (D = 1; D <= 5; D++) {
					for (E = 1; E <= 5; E++) {
						if (((B == 2) + (A == 3) == 1) &&
							((B == 2) + (E == 4) == 1) &&
							((C == 1) + (D == 2) == 1) &&
							((C == 5) + (D == 3) == 1) &&
							((E == 4) + (A == 1) == 1)) {
							if (A * B * C * D * E == 120) {
								printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
int main() {
	char x;
	for (x = 'A'; x <= 'D'; x++) {
		if ((x != 'A') + (x == 'C') + (x == 'D') + (x != 'D') == 3) {
			printf("%c\n", x);
			break;
		}
	}
	system("pause");
	return 0;
}
int main() {
	int i, j, n;
	int a[100][100];
	printf("Enter n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			if (j == 0 || i == j) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif
