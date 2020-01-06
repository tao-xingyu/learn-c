#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
//顺位打印
void Print(int n) {
	if (n > 9) {
		Print(n / 10);
	}
	printf("%d ", n % 10);
}
int main() {
	int num = 1234;
	Print(num);
	system("pause");
	return 0;
}
//反位打印
int Print(int n) {
	if (n == 0) {
		return 0;
	}
		printf("%d ", n % 10);
	Print(n / 10);
	return n;
}
int main() {
	int num = 1234;
	Print(num);
	system("pause");
	return 0;
}
//递归实现字符串
int strlen(char *str) {
	if (*str == '\0') {
		return 0;
	}
	return 1 + strlen(str + 1);
}
int main() {
	char *p = "happyeveryday";
	int len = strlen(p);
		printf("%d\n", len);
		system("pause");
		return 0;
}
//递归实现返回数字之和
int DigitSum(int n) {
	if (n == 0) {
		return 0;
	}
	return n % 10 + DigitSum(n / 10);
}
int main() {
	printf("%d\n", DigitSum(1729));
	system("pause");
	return 0;
}
//递归n的阶乘
int fac(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * fac(n - 1);
	}
}
int main() {
	printf("%d\n", fac(2));
system("pause");
return 0;
}
//递归将字符串中的字符反向排列
int myStrlen(char *str) {
	if (*str == '\0') {
		return 0;
	}
	return 1 + strlen(str + 1);
}
void reverse_string(char *str) {
	if (*str) {
		int tmp;
		int end = myStrlen(str) - 1;
		tmp = *str;
		*str = str[end];
		str[end] = '\0';
		reverse_string(str + 1);
		str[end] = tmp;
	}
}
int main() {
	char str[] = "bitekeji";
	reverse_string(str);
	puts(str);
	system("pause");
	return 0;
}
//非递归求字符串
int Strlen(char *str) {
	int i;
	int len;
	for (i = 0; str[i]; i++) {
		len = strlen(str);
	}
	return len;
}
int main() {
	char arr[] = "hello";
	printf("%d\n", Strlen(arr));
	system("pause");
	return 0;
}
//二分查找
int bin(int arr[], int len, int key) {
	int mid;
	int left = 0;
	int right = len - 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (key > arr[mid]) {
			left = mid + 1;
		}
		else if (key < arr[mid]) {
			right = mid - 1;
		}
		else {
			break;
		}
	}
	if (key == arr[mid]) {
		return mid;
	}
	else {
		return 0;
	}
}
int main() {
	int arr[] = { 1,2,4,5,8,9,23,45,67 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = bin(arr, len, 45);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

int mystrlen(char *str) {
	if (*str == '\0') {//不要将==写成=!!!!!
		return 0;
	}
	return 1 + mystrlen(str + 1);
}
int main() {
	char a[] = "hello";
	int len;
	len = mystrlen(a);
	printf("%d\n", len);
	system("pause");
	return 0;
}
#endif
//冒泡排序
void Swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void Bubble(int *arr, int len) {
	int i, j;
	for (i = 1; i < len; i++) {
		for (j = 0; j < len - i; j++) {
			if (arr[j] > arr[j + 1]){
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
int main() {
	int i;
	int a[] = { 3,2,6,8,0,12 };
	int len = sizeof(a) / sizeof(a[0]);
	Bubble(a, len);
	for (i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}