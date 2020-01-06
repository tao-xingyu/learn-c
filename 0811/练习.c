#include<stdio.h>
#include<stdlib.h>
#if 0
int main() {
	int a = 0x12345678;
	char *pc = (char*)&a;
	printf("%x\n", *pc);

	system("pause");
	return 0;
}

int main() {
	char a= 1;
	char b= 2;
	printf("%d\n", sizeof(a + b));
	system("pause");
	return 0;
}


//void类型指针,只可以进行地址的保存,不可以进行指针的运算
//低地址 地数据 小端
//低地址 高数据 大端




//将指针 去掉* 求sizeof<指针的加减法>
//访问几个字节 解引用几个字节<指针的解应用>

//数组名在以下两种情况代表整个数组的值
//int(*p)=&arr数组指针
//printf("%p\n", arr);数组首元素地址
//printf("%p\n", &arr[0]);数组首元素地址
//printf("%p\n", &arr);整个数组的地址
//printf("%p\n", &arr+1)加整个数组的地址
//printf("%p\n", arr+1)加一个字节

//指针-指针:两个指针指向同一块内存的时候
//二级指针存放的是指针的地址

//数组指针:指向数组的指针   int(*p)[3]
//指针数组:存放指针的数组   int*arr[3]

int count_one_bits(unsigned int value) {
	int count = 0;
	while (value) {
		count++;
		value = value & (value - 1);
	}
	return count;
}
int main() {
	int n,ret;
	printf("Enter number:");
	scanf("%d", &n);
	ret = count_one_bits(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

void num(unsigned int n) {
	int arr[32];
	int i;
	for (i = 0; i < 32; i++) {
		arr[i] = n & 1;
		n = n >> 1;
	}
	printf("偶数位为:");
	for (i = 31; i > 0; i -= 2) {
		printf("%d", arr[i]);
	}
	printf("\n");
	printf("奇数位为:");
	for (i = 30; i >= 0; i -= 2) {
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main() {
	int x = 0;
	printf("Enter number:");
	scanf("%d", &x);
	num(x);
	system("pause");
	return 0;
}

void num(int n) {
	if (n > 9) {
		num(n / 10);
	}
		printf("%d ", n % 10);
}
int main() {
	int x;
	printf("Enter number:");
	scanf("%d", &x);
    num(x);
	printf("\n");
	system("pause");
	return 0;
}
int num(int x, int y) {
	int ret;
	int count = 0;
	ret = x ^ y;//将两个数按位亦或,相同为0,不同为1
	while (ret) {
		ret = ret & (ret - 1);
		count++;//统计1的个数
	}
	return count;
}
int main() {
	int m, n;
	int t;
	printf("Enter number:");
	scanf("%d%d", &m, &n);
	t = num(m, n);
	printf("%d\n",t); 
	system("pause");
	return 0;
}
int main() {
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++) {
		for (b = 1; b <= 5; b++) {
			for (c = 1; c <= 5; c++) {
				for (d = 1; d <= 5; d++) {
					for (e = 1; e <= 5; e++) {
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1) &&
							(a*b*c*d*e == 120) &&
							(a + b + c + d + e == 15)) {
							printf("A:%d,B:%d,C:%d,D:%d,E:%d", a, b, c, d, e);
							printf("\n");
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
	int x;
	for (x = 'A'; x <= 'D'; x++) {
		//括号中情况为真结果就是1,反之就是0,所以三真一假,(1+1+0+1=3)
		if (((x != 'A') + (x == 'C') + (x == 'D') + (x != 'D')) == 3) {
			printf("嫌疑人x是:%c\n", x);
		}
	}
	system("pause");
	return 0;
}

int main() {
	int i, j;
	int n = 0;
	int arr[100][100] = { 1 };//
	while (n < 1 || n>100) {
		printf("请输入行数:");
		scanf("%d", &n);
	}
	for (i = 1; i < n; i++) {//确定行数
		arr[i][0] = 1;//每一行第一个数初始化为1
		for (j = 1; j <= i; j++) {//限制字符数,确定列
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//设定中间值
		}
	}
	for (i = 0; i < n; i++) {//逐行打印二维数组
		for (j = 0; j <= i; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");

	}
	system("pause");
	return 0;
}
#endif

