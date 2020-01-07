#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#if 0
unsigned fun(int n) {
	int i = 0;
	unsigned int sum = 0;
	for (i = 0; i < 32; i++) {
		sum += ((n >> i) & 1)*pow(2, 31 - i);
	}
	return sum;
}
int main() {
	int num = 21;
	unsigned int ret = fun(21);
	printf("%u\n", ret);
	system("pause");
	return 0;
}
int main() {
	int a, b, ret;
	printf("Enter number:");
	scanf("%d%d", &a, &b);
	ret = (a + b) >> 1;
	printf("%d\n", ret);
	system("pause");
	return 0;
}
int main() {
	int i,ret = 0;
	int a[] = { 1,2,3,9,3,2,1 };
	int len = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < len; i++) {
		ret ^= a[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}
int Mystrlen(const char*str) {
	int len = 0;
	while (*str++) {
		len++;
	}
	return len;
}
void reverse(char* left, char* right) {
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void str_reverse(char*str) {
	assert(str);
	int len = Mystrlen(str);
	reverse(str, str + len - 1);
	while (*str != '\0') {
		char* p = str;
		while ((*str != ' ') && (*str != '\0')) {
			str++;
		}
		reverse(p, str - 1);
		if (*str != '\0') {
			str++;
		}
	}
}
int main() {
	char str[] = "hello haha";
	str_reverse(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}
#endif
