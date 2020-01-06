//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
#if 0
//乘法口诀表
int mult_table(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%2d*%d=%d", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}
int main() {
	printf("%d", mult_table(12));
	system("pause");
	return 0;
}
//交换两个数
int swap(int*x, int*y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	return 0;
}
int main() {
	int a = 10;
	int b = 30;
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
//判断闰年
int leap_year(int year) {
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int n;
	int ret;
	printf("输入年份：");
	scanf("%d", &n);
	ret = leap_year(n);
	if (ret == 1) {
		printf("是闰年！\n");
	}
	else {
		printf("不是闰年！\n");
	}
	system("pause");
	return 0;
}

//实现初始化、清空、逆置数组函数
void init(int arr[], int len) {//初始化
	int i;
	for (i = 0; i < len; i++) {
		arr[i] = i;
	}
}
void empty(int arr[], int len) {//清空
	int i;
	for (i = 0; i < len; i++) {
		arr[i] = '\0';
	}
}
void reverse(int arr[], int len) {//逆置
	int i;
	for (i = 0; i < len; i++) {
		arr[i] = len - 1 - i;
	}
}
int main() {
	int i;
	int a[] = { 1,2,3,4,5 };
	int len = sizeof(a)/sizeof(a[0]);
	init(a, 5);
	for (i = 0; i < len; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	empty(a, 5);
	for (i = 0; i < len; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	reverse(a, 5);
	for (i = 0; i < len; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
//判断素数
int primenum(int n) {
	int i;
	for (i = 2; i <= sqrt(n); i++) {
		if (n%i == 0) {
			return 0;//返回0则不是素数
		}
	}
	return 1;//返回1则是素数
}
int main() {
	printf("%d\n",primenum(117));
	system("pause");
	return 0;
}

//二分法
int bin_search(int arr[], int len, int key) {
	int left = 0;
	int right = len - 1;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] > key) {
			right = mid - 1;
		}
		else if (arr[mid] < key) {
			left = mid + 1;
		}
		else {
			break;
		}
	}
	if (arr[mid] == key) {
		return mid;
	}
	else {
		return 0;
	}
}
int main() {
	int a[10] = { 1,3,4,6,7,9,12,34,45,67 };
	int len = sizeof(a) / sizeof(a[0]);
	int ret;
	ret = bin_search(a, len, 6);
	if (ret == 0) {
		printf("找不到！\n");
	}
	else {
		printf("找到了，该数字下标为：%d\n", ret);
	}
	system("pause");
	return 0;
}

//输密码
int main() {
	int i = 0;
	char pass[10] = "999666";
	for (i = 0; i < 3; i++) {
		printf("请输入密码：");
		scanf("%s", &pass);
		if (strcmp(pass, "999666") == 0) {//比较字符串大小，相等则输出0
			break;
		}
		else if(i<2) {
			printf("继续输入！\n");
		}
	}
	if (i == 3) {
		printf("退出！\n");
	}
	else {
		printf("输入正确！\n");
	}
	system("pause");
	return 0;
}
//字符转换
int main() {
	int ch = 0;//整型
	printf("输入字符串：");
	scanf("%d", &ch);
	while ((ch = getchar()) != EOF) {
		if (ch >= 'a'&&ch <= 'z') {
			ch = ch - 'a' + 'A';//小换大
			printf("%c", ch);
		}
		else if (ch >= 'A'&&ch <= 'Z') {
			ch = ch - 'A' + 'a';//大换小
			printf("%c", ch);
		}
		else if (ch >= '0'&&ch <= '9') {
			printf("\0");//不打印
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
#endif
#if 0
//斐波那契数
//递归实现
int fab(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fab(n - 1) + fab(n - 2);
	}
}
int main() {
	printf("%d\n", fab(3));
	system("pause");
	return 0;
}
//非递归实现
int main() {
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	int i, n;
	printf("Enter number:");
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
//n^k递归实现
int powr(int n, int k) {
	if (k == 0) {
		return 1;
	}
	else {
		return n*powr(n, k - 1);
	}
}

int main() {
	int n = 2;
	int k = 3;
	int ret;
	ret = powr(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#endif
//非递归求n的阶乘
//int main() {
//	int n, i;
//	double sum = 1;
//	printf("Enter number:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum *= i;
//	}
//	printf("%lf", sum);
//	system("pause");
//	return 0;
//}