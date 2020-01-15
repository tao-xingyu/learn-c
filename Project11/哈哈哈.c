#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//int Max(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	return y;
//}
//                     //求两个数中的最大值
//int main() {
//	int a = 10;
//	int b = 20;
//	int ret = Max(a, b);
//	printf("ret = %d\n", ret);
//
//	a = 100;
//	b = 80;
//	ret = Max(a, b);
//		printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}



//int main() {
//	int a = 10;
//	int b = 20;
//	//交换AB的位置
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d, b = %d\n", a, b);
//	system("pause");
//	return 0;
//}

//
//void Swap(int* x, int* y) {//*表示解引用操作
//	int tmp = *x;
//	*x = *y;             //*X与A等价,*Y同理
//	*y = tmp;
//}                         //形参XY是实参AB的一个拷贝
//int main() {
//	int a = 10;
//	int b = 20;
//
//	Swap(&a, &b);
//	printf("a = %d\n,b = %d\n", a,b);
//	system("pause");
//	return 0;
//
//
//}




////乘法口诀表
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%2d*%d = %d", j, i, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


////求N的阶乘
//int Factor(int n) {
//	if (n == 0 || n == 1) {
//		return 1;
//	}
//	return n * Factor(n - 1);
//
//}
//
//int main() {
//	printf("%d\n", Factor(5));
//	system("pause");
//	return 0;
//}

//把三个数按从大到小输出
//int main() {
//	int x, y, z, max, min;
//	scanf("%d%d%d", &x, &y, &z);
//	if (x > y) {
//		max = x;
//		min = y;
//	}
//	if (z > max) max = z;
//	if (min > z)   min = z;
//	y = x + y + z - max - min;
//	x = max;
//	z = min;
//	printf("从大到小排列:%d  %d %d\n", x, y, z);
//
//	system("pause");
//	return 0;
//}


////求1-100中能被6整除的所有整数的和
//int main() {
//	int i, sum = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 6 == 0) {
//			sum = sum + i;	
//		}
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//
////N是否为一个素数
//int main() {
//	int n, i;
//	scanf("%d", &n);
//	for (i = 2; i < n; i++) {
//		if (n % i == 0); {
//			break;
//		}
//	}
//	if (i == n) {
//		printf("%d是素数\n", n);
//	}
//	else {
//		printf("%d不是素数\n", n);
//	}
//
//	system("pause");
//	return 0;
//}

