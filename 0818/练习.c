#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#if 0
int main() {
	int i, j;
	for (i = 100; i <= 200; i++) {
		for (j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) {
				break;
			}
		}
		if (j > sqrt(i)) {
				printf("%d\n", i);

		}
	}
	system("pause");
	return 0;
}
void fun(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%3d*%d=%d", j, i, i*j);
		}
		printf("\n");
	}
}
int main() {
	fun(12);
	system("pause");
	return 0;
}
int main() {
	int i;
	for (i = 1000; i <= 2000; i++) {
		if (((i % 4 == 0 )&& (i % 100 != 0)) || i % 400 == 0) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}
int main() {
	int a = 10;
	int b = 20;
	printf("a = %d\nb = %d\n", a, b);
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf("a = %d\nb = %d\n", a, b);
	system("pause");
	return 0;
}
int main() {
	int a = 10;
	int b = 20;
	printf("a = %d\nb = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d\nb = %d\n", a, b);
	system("pause");
	return 0;
}
int main() {
	int a, b, c,tmp;
	printf("Enter number:");
	scanf("%d%d%d", &a,&b,&c);
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) {
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c) {
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("从大到小:%d %d %d\n",a,b,c);
	system("pause");
	return 0;
}
int main() {
	int i,a, b, m;
	printf("Enter number:");
	scanf("%d%d", &a, &b);
	if (a > b) {
		m = a;
		a = b;
		b = m;
		for (i = a; i >= 2; i--) {
			if (a%i == 0 && b%i == 0) {
				printf("最大公约数为:%d\n", i);
				break;
			}
		}
	}
	if (i == 1) {
		printf("两数只能同时被1整除\n");
	}
	system("pause");
	return 0;
}
int main() {
	int a[3] = { 1,2,3 };
	int b[3] = { 5,6,7 };
	int i,tmp;
	for (i = 0; i < 3; i++) {
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	for (i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
		for (i = 0; i < 3; i++) {

		printf("%d ", b[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
int main() {
	int i,sign =1;
	double sum = 0,temp;
	for (i = 1; i <= 100; i++) {
		temp = sign*(1.0/ i);
		sum += temp;
		sign *= -1;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}
int main() {
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
int main() {
	int i, j;
	for (i = 1; i <= 7; i++) {
		for (j = 1; j <= 2*i-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 6; i >=1; i--) {
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
int main() {
	int i = 0;
	for (i = 0; i <= 999999; i++) {
		int count = 0;
		int sum = 0, t;
		t = i;
		while (t) {
			count++;
			t = t / 10;
		}
		t = i;
		while (t) {
			sum += (int)pow(t % 10, count);
			t = t / 10;
		}
		if (i == sum) {
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
int main() {
	int i;
	int sum = 0;
	int tmp = 0;
	int n = 3;
	for (i = 0; i < 5; i++) {
		tmp = tmp * 10 + n;
		sum += tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
#endif
int main() {
	char *c[] = { "ENTER","NEW","POINT","FIRST" };
	char**cp[] = { c + 3,c + 2,c + 1,c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n",cpp[-1][-1]+1);
	system("pause");
	return 0;
}