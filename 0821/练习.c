#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#if 0
//ì³²¨ÄÇÆõÊý
int main() {
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	int i,n;
	printf("Enter number:");
	scanf("%d", &n);
	for (i = 3; i<=n; i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("%d\n", f3);
	system("pause");
	return 0;
}
int fun(int n) {
	if (n == 1||n == 2) {
		return 1;
	}
	return fun(n - 1) + fun(n - 2);
}
int main() {
	printf("%d", fun(3));
	system("pause");
	return 0;
}
int fun(int n,int k) {
	if (k == 0) {
		return 1;
	}
	return n * fun(n, k - 1);
}
int main() {
	printf("%d\n", fun(2, 2));
	system("pause");
	return 0;
}
int DigitSum(n) {
	if (n == 0) {
		return 0;
	}
	return  n % 10 + DigitSum(n / 10);
}
int main() {
	printf("%d\n", DigitSum(1234));
	system("pause");
	return 0;
}
int Mystrlen(char*str) {
	if (*str == '\0') {
		return 0;
	}
	return 1 + Mystrlen(str + 1);
}
void  reverse_string(char * str) {
	if (*str) {
		int tmp;
		int end = Mystrlen(str) - 1;
		tmp = *str;
		*str = str[end];
		str[end] = '\0';
		reverse_string(str + 1);
		str[end] = tmp;
	}
}
int main() {
	char str[] = "dadahahaha";
	reverse_string(str);
	puts(str);
	system("pause");
	return 0;
}
int Mystrlen(char*str) {
	if (*str == '\0') {
		return 0;
	}
	return 1 + Mystrlen(str + 1);
}
int main() {
	int ret;
	char arr[] = "hahahaha";
	ret = Mystrlen(arr);
	printf("%d", ret);
	system("pause");
	return 0;
}

int main() {
	int len = 0;
	char* p= "hahahaha";
	while(*p++) {
		len++;
	}
	printf("%d\n", len);
	system("pause");
	return 0;
}
int main() {
	int n;
	int i;
	double sum = 1;
	printf("Enter number:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum *= i;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}
int fun(int n) {
	if (n == 0) {
		return 1;
	}
	return n * fun(n - 1);
}
int main() {
	printf("%d\n", fun(3));
	system("pause");
	return 0;
}
void fun(int n) {
	if (n > 9) {
		fun(n/10);
	}
	printf("%d ",n%10);
}
int main() {
	int num = 1899;
	fun(num);
	system("pause");
	return 0;
}
#endif
