#include<stdio.h>
#include<stdlib.h>
#if 0
//算数操作符中 / 的运算:两个数是整数就执行整数除法,浮点数就用浮点数除法
int main() {
	printf("%f\n",(float) 5 / 2);//2.5
	printf("%f\n", 5 /(float)2);//2.5
	printf("%f\n",(float) (5 / 2));//2.0
	printf("%f\n", 5 / 2.0);//2.5
	printf("%f\n",2/5);//0
	system("pause");
	return 0;
}
//右移操作符 >>  :移一位相当于/2   算术移位:补符号位
//左移操作符<<   :移一位相当于*2
int main() {
	char ch = -1;
	ch = -1 >> 1;//右移一位
	printf("%d\n", ch);//补符号位,仍然是-1
	system("pause");
	return 0;
}
//按位与 & :如果两个数字都为1,结果为1,否则为0;
//按位或 | :如果两个数字都为0,结果为0,否则为1;
//按位取反 ~ :针对这个数字,0变成1,1变成0;
//按位异或 ^ :如果两个数字相同,结果为0,相异为1;

//0异或任何数,都是它本身
int main() {
	int arr[] = { 1,2,3,6,3,2,1 };//找出唯一的那个数字
	int i = 0;
	int ret = 0;
	for (i = 0; i < 7; i++) {
		ret = ret ^ arr[i];
	}
	printf("%d\n", ret);//6
	system("pause");
	return 0;
}
//逗号表达式:各部分参与运算,但是只取最后一个的运算结果
//sizeof():编译期间确定类型字节的大小,并不参与运算
//表达式1 && 表达式2    表达式1为假则不再继续执行,短路与
//表达式1 || 表达式2     表达式1为真则不再继续执行,短路或
//条件操作符
//不用if  for  大于等于  比较两个数大小
int Func(int a, int b) {
	return(a - b) >> 31 ? -1 : (a - b ? 1 : 0);
	//                   小于         大于等于
}
int main() {
	printf("%d\n", Func(1, 2));
	printf("%d\n", Func(2, 1));
	printf("%d\n", Func(1, 1));
	system("pause");
	return 0;
}
//编写代码实现:求一个整数储存在内存中的二进制中1的个数
//方法1:
int main() {
	int n = 15;
	int count = 0;
	while (n) {
		if (n % 2 == 1) {
			count++;
		}
		n = n / 2;
	}
	printf("二进制中一的个数:%d\n", count);
	system("pause");
	return 0;
}
//优化方法2:
int main() {
	int n = -1;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++) {
		if (((n >> i) & 1) == 1) {
			count++;
		}
	}
	printf("二进制中一的个数:%d\n", count);
	system("pause");
	return 0;
}
//优化方法3:
int main() {
	int n = -1;
	int i = 0;
	int count = 0;
	while (n) {
		count++;
		n = n & (n - 1);
	}
	printf("二进制中一的个数:%d\n", count);
	system("pause");
	return 0;
}

int bin_search(int arr[], int len, int key) {
	int mid = 0;
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
		return -1;
	}
}
int main() {
	int a[8] = { 1,3,4,6,23,45,67,89 };
	int len = sizeof(a) / sizeof(a[0]);
	int ret;
	ret = bin_search(a, len,22);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

void Swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void bubble(int arr[], int len) {
	int i, j;
	for (i = 1; i < len; i++) {
		for (j = 0; j < len - i; j++) {
			if (arr[j] > arr[j + 1]) {
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
int main() {
	int i;
	int arr[] = { 1,8,3,9,6,4,2,7,5,3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, len);
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
#endif
