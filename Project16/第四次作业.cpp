#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

////输出右半边菱形
//int main() {
//	int i, j;
//    for (i = 1 - 13; i <= 13 - 1; i++){
//		for (j = 0; j <= (13 - abs(i)) - 1; j++)
//				printf("*");
//			printf("\n");
//		}
//	system("pause");
//		return 0;
//}


//int main() {
//	int n,hun,ten,ind;
//	n = 0;
//	for (n = 100; n <= 1000; n++) {
//		hun = n / 100;
//		ten = (n - hun * 100) / 10;
//		ind = n % 10;
//		if (hun*hun*hun + ten*ten*ten + ind*ind*ind == n) {
//			printf("水仙花数  字有：%d", n);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0; 
//}

////输出Sn=a+aa+aaa+aaaa+aaaaa的前五项和
//int main(){
//	int a, n,i, tn = 0, sn = 0;
//	printf("n:");
//	scanf("%d", &n);
//	printf("a:");
//	scanf("%d", &a);
//	for (i = 1; i <= n; i++) {
//		tn = tn + a;
//		sn = sn + tn;
//		a = a * 10;
//	}
//	printf("Sn = %d\n",sn);
//    system("pause");
//	return 0;
//}
///////////////////////////////////////以上第四次作业，以下第五次/////////////////////////////

////猜数字游戏
//int main() {
//	int num1, num2, i;
//	printf("Enter num1:");
//		scanf("%d",&num1);
//		for (i = 0; i < 6; i++) {
//		printf("Enter num2:");
//		scanf("%d",&num2);
//		if (num2 > num1) {
//			printf("你猜的数据大了！\n");
//		}
//		if (num2 < num1) {
//			printf("你猜的数据小了！\n");
//		}
//		if (num2 == num1) {
//			printf("你赢了!\n");
//			break;
//		}
//		if (i == 5) {
//			printf("你输了！正确答案为：%d\n", num1);
//			break;
//		}
//		}
//	system("pause");
//	return 0;
//}

////二分查找，找到想要的数字，找到打印下标，找不到输出1
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = arr[0];
//	int k;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("想找的数字是：");
//		scanf("%d",&k);
//	while (left <= right) {
//		int mid = left + (right - left) / 2;
//		if (arr[mid] == k) {
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//		else if (arr[mid] <= k) {
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	if (left > right) {
//		printf("没有找到,-1\n");
//	}
//	system("pause");
//	return 0;
//}
//

////三次密码输入的场景
//int main() {
//	int i, pass1,pass2;
//	printf("正确密码:");
//	scanf("%d", &pass1);
//	for (i = 1; i <= 3; i++) {
//		printf("解锁密码:");
//		scanf("%d", &pass2);
//		if (pass2 != pass1) {
//			printf("密码错误,请重新输入!\n");
//		}
//		if (pass2 == pass1) {
//			printf("登陆成功!\n");
//			break;
//		}
//		if (i == 3) {
//			printf("请退出程序!\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

////输入字符串,大小写互换,数字不输出,可以一直从键盘接收字符
//int main() {
//	int ch=0;
//	printf("请输入字符:\n");
//	while ((ch = getchar()) != EOF) {
//		if (ch >= 'a'&&ch <= 'z') {
//			printf("%c", ch - 'a' + 'A');
//		}
//		else if (ch >= 'A'&&ch <= 'Z') {
//			printf("%c", ch - 'A' + 'a');
//		}
//		else if (ch >= '0'&&ch <= '9') {
//
//		}
//	}
//	printf("\n");
//		system("pause");
//		return 0;
//	}

//////////////////////////////////////////////////////////////////以下是第六次作业

////使用交换函数实现两个数的交换
//void Swap(int* x,int* y) {
//	int tmp = *x;
//	*x = * y;
//	*y = tmp;
// }
//int main() {
//	int x, y;
//	printf("Enter x:");
//	scanf("%d", &x);
//	printf("Enter y:");
//	scanf("%d", &y);
//	Swap(&x,&y);
//	printf("交换结果:%d %d", x, y);
//	system("pause");
//	return 0;
//}

////实现一个函数判断YEAR是否是闰年
//int Leap_year(int y) {
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
//		printf("是闰年!\n");
//	}
//	else {
//		printf("不是闰年!\n");
//	}
//	return 0;
//}
//int main() {
//	int year;
//	printf("Enter year:");
//	scanf("%d", &year);
//	Leap_year(year);
//	system("pause");
//	return 0;
//}

////实现一个函数判断一个数是否为素数
//int prime_number(int num) {
//	int i;
//	for (i = 2; i <= sqrt(num);i++) {
//		if (num%i == 0) {
//			return 0;
//		}
//	}	
//	return 1;
//}
//int main() {
//	int num,ret = 0;
//	printf("请输入一个大于一的整数:");
//	scanf("%d", &num);
//	ret = prime_number(num);
//	if (ret == 1) {
//		printf("%d 是素数", num);
//	}
//	else {
//		printf("%d 不是素数", num);
//	}
//	system("pause");
//	return 0;
//}
//
////打印乘法口诀表,使用函数,行列自己指定
//int print(int n) {
//	int i, j;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%3d*%d=%d", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main() {
//	int n =0;
//	printf("Enter n:");
//	scanf("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}

//void Init(int arr[], int len) {//数组初始化
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		arr[i] = i;
//	}
//}
//void Empty(int arr[], int len) {//数组清0
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		arr[i] = '\0';
//	}
//}
//void Reverse(int arr[], int len){ //数组逆置
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		arr[i] = len - 1 - i;
//	}
//}
//void Show(int arr[], int len) {////打印函数
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, len);
//	Show(arr, len);//打印
//	Empty(arr, len);
//	Show(arr, len);//打印
//	Reverse(arr, len);
//	Show(arr, len);//打印
//	system("pause");
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////


//int main() {
//	/*int num = 10;
//	int*p = &num;
//	printf("%d\n", sizeof(p));
//	double num2 = 10.0;
//	double *p2 = &num2;
//	printf("%d\n", sizeof(p2));*/
//	char* p1 = (char*)0x100;
//	char* p2 = (char*)0x100;
//	printf("%d\n", p2 - p1);
//	system("pause");
//	return 0;
//}


////二分查找
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0] - 1);
//	while (left <= right) {
//		int mid = (right - left) / 2 + left;
//		if (arr[mid] < k) {
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//
//		}
//		else {
//			printf("找到了,下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到!");
//	}
//	system("pause");
//	return 0;
//}
//


//int fibonacci(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return fibonacci(n - 1) + fibonacci(n - 2);
//	}
//}
//int main() {
//	int n;
//	printf("请输入斐波那契数的位数:\n");
//	scanf("%d", &n);
//	int ret = fibonacci(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//////////以上是利用递归函数求斐波那契数列的第N项和
//////////以下为普通方法求斐波那契数的第N项

//int main() {
//	int n;
//	printf("请输入要求的斐波那契数的位数:\n");
//	scanf("%d", &n);
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

//typedef struct Student {
//	int id;
//	char name[1024];
//	int score;
//}Student;
//
//int main() {
//	Student s = { 100,"张三",5 };
//	Student* p = &s;
//	printf("%d\n", s.id);
//	printf("%d\n", (*p).id);
//	system("pause");
//	return 0;
//
//}

//int main() {
//	/*char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,d=%d,c=%d", a, b, c);*/
//	char a = -128;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

////函数实现n^k,使用递归实现
//int Pow(int n, int k) {
//	if (k == 0) {
//		return 0;
//	}
//	else if (k == 1) {
//		return n;
//	}
//	else {
//	return n * Pow(n, k - 1);
//	}
//}
//int main() {
//	int n = 9;
//	int k = 2;
//	printf("%d\n", Pow(n, k));
//	system("pause");
//	return 0;
//}

////实现整数函数逆序输出
//void reverse(int num) {
//	if (num <= 9) {
//		printf("%d", num);
//	}
//	else {
//		printf("%d", num % 10);
//		reverse(num / 10);
//	}
//}
//int main() {
//	int n;
//	printf("输入一个整数:");
//	scanf("%d", &n);
//	reverse(n);
//	system("pause");
//	return 0;
//}

                                //需要记住这一特性
//int main() {          
//	int num = 10;      
//	int num2 = 20;              //const放在最前面或者是中间,限制指针指向的内容
//	const int*  p = &num;       //const放在*和变量之间,这是限制修改指针中保存的地址
//	//*p = 20;//修改指针指向的内容
//	p = &num2;//修改指针中保存的地址
//	system("pause");
//	return 0;
//}


