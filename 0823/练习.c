#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main() {//逆序
//	int n = 0;
//	printf("Enter n:");
//	scanf("%d", &n);
//	while (n) {
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//	system("pause");
//	return 0;
//}
#if 0
int main() {
	int count = 0;
	int n;
	printf("Enter n:");
	scanf("%d", &n);
	while (n) {
		count++;
		n = n & (n - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
void fun(int n) {
	int i = 0;
	for (i = 31; i >= 1; i -= 2) {
		printf("%d ", (n >> i) & 1);//偶数位
	}
	printf("\n");

	for (i = 30; i >= 0; i -= 2) {
		printf("%d ", (n >> i) & 1);//奇数位
	}
}
int main() {
	fun(21);
	system("pause");
	return 0;
}
void fun(int n) {
	if (n > 9) {
		fun(n / 10);
	}
	printf("%d ", n % 10);
}
int main() {
	fun(123);
	system("pause");
	return 0;
}
int main() {
	int a;
	int b;
	int ret, count = 0;
	printf("Enter num:");
	scanf("%d%d", &a,&b);
	ret = a ^ b;
	while (ret) {
		count++;
		ret = ret & (ret - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
#endif
struct s1 
{
	char a1;
	int i;
	char c2;
};
int main() {
	printf("%d\n", sizeof(struct s1));
	system("pause");
	return 0;
}