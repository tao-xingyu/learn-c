#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

////使用递归求n的阶乘
//double fact(int n) {
//	double result;
//	if (n == 1 || n == 0) {
//		 result = 1;
//	}
//	else {
//		result = n * fact(n - 1);
//	}
//	return result;
//}
//int main() {
//	int n;
//	printf("输入数字n:");
//	scanf("%d", &n);
//	printf("%.3f", fact(n));
//	system("pause");
//	return 0;
//}

////使用循环求阶乘
//int main() {
//	int i, n;
//	double result;
//	printf("Enter n:");
//	scanf("%d", &n);
//		result = 1;
//	for (i = 1; i <= n; i++) {
//		result = result * i;
//	}
//	printf("%.2f", result);
//	system("pause");
//	return 0;
//}

////非递归实现strlen
//int my_strlen(const char *p) {
//	assert(p != NULL);
//	int num = 0;
//	while (*p) {
//		num++;
//		p++;
//	}
//	return num;
//}
//int main() {
//	char *p = "abcdefg";
//	int ret = my_strlen(p);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

////递归实现strlen
//int my_strlen(const char *p) {
//	assert(p != NULL);
//	if (*p == '\0') {
//		return 0;
//	}
//	else {
//		return 1 + my_strlen(p + 1);
//	}
//}
//int main() {
//	char *p = "abcdefghijk";
//	int ret = my_strlen(p);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

////学生成绩排序
//struct student {
//	int num;
//	char name[10];
//	int computer, english, math;
//	double average;
//};
//int main() {
//	int i, index, j, n;
//	struct student students[50], temp;
//	printf("Input n:");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		printf("Input the info of No.%d：\n", i + 1);
//		printf("number:");
//		scanf("%d", &students[i].num);
//		printf("name:");
//		scanf("%s", &students[i].name);
//		printf("math score:");
//		scanf("%d", &students[i].math);
//		printf("english score:");
//		scanf("%d", &students[i].english);
//		printf("computer score:");
//		scanf("%d", &students[i].computer);
//		students[i].average = (students[i].math + students[i].english + students[i].computer) / 3.0;
//	}
//	for (i = 0; i < n - 1; i++) {
//		index = i;
//		for (j = i + 1; j < n; j++) {
//			if (students[j].average > students[index].average) {
//				index = j;
//				temp = students[index];
//				students[index] = students[i];
//				students[i] = temp;
//			}
//		}
//	}
//	printf("num\t name\t average\n");
//	for (i = 0; i < n; i++) {
//		printf("%d\t%s\t%.2lf\n", students[i].num, students[i].name, students[i].average);
//
//
//	}
//		system("pause");
//		return 0;
//	}

//int main() {
//	int m[][3] = { 1,4,7,2,5,8,3,6,9 };
//	int i, j, k = 2;
//	for (i = 0; i < 3; i++) {
//		printf("%d", m[k][i]);
//	}
//	system("pause");
//	return 0;
//}


////二分查找
//int Bsearch(int *p, int n, int x);//函数声明
//int main() {
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x, m;
//	printf("Enter x:");//输入查找值
//	scanf("%d", &x);
//	m = Bsearch(a, 10, x);//调用函数
//	if (m >= 0) {
//		printf("Index is%d\n", m);
//	}
//	else {
//		printf("Not Found\n");//m为负数
//	}
//	system("pause");
//	return 0;
//}
//
//int Bsearch(int *p, int n, int x) {
//	int low, high, mid;
//	low = 0;
//	high = n - 1;
//	while (low <= high) {
//		mid = (low + high) / 2;
//		if (x == p[mid]) {//一、x为中间值，直接输出
//			break;
//		}
//		else if (x < p[mid]) {
//			high = mid - 1;//二、x小于中间值，调整区间
//		}
//		else {
//			low = mid + 1;//三、x大于中间值，调整区间
//		}
//	}
//	if (low <= high) {
//		return mid;//找到x，则返回下标
//	}
//	else {
//		return -1;//负数表示找不到x，则返回-1
//	}
//}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
