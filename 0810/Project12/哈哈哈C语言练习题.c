#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//int main() {
//	printf("Programming in C is fun!\n");
//	system("pause");
//	return 0;
//}

//int main() {
//	printf("* * * *\n * * *\n  * *\n   *\n");
//	system("pause");
//	return 0;
//}

//int main() {
//	int fahr, celsius;
//	fahr = 150;
//	celsius = 5 * (fahr - 32) / 9;
//	printf("fahr = %d\ncelsius = %d\n",fahr,celsius);
//	system("pause");
//	return 0;
//}

//int main() {
//	double height;
//	height = 0.5 * 10 * 3 * 3;
//	printf("height = %.2f\n", height);
//	system("pause");
//	return 0;
//}

//int main() {
//	int fahr, celeius;
//	printf("fahr:");
//	scanf_s ("%d",&fahr);
//	celeius = 5 * (fahr - 32) / 9;
//	printf("celeius = %d\n", celeius);
//	system("pause");
//	return 0;
//}

//int main() {
//	int num1,num2, sum, differ, product, quotient;
//	printf("num1:");
//	scanf_s("%d", &num1);
//	printf("num2:");
//	scanf_s("%d", &num2);
//	sum = num1 + num2;
//	differ = num1 - num2;
//	product = num1 * num2;
//	quotient = num1 / num2;
//	printf("sum=%d\ndiffer=%d\nproduct=%d\nquotient=%d\n", sum, differ, product, quotient);
//	system("pause");
//	return 0;
//}

//int main() {
//	double x,y;
//	printf("x=:");
//	scanf_s("%lf", &x);
//	if (x != 0) {
//		y = 1 / x;
//	}
//	else {
//		y = 0;
//	}
//	printf("y = %.1lf", y);
//	system("pause");
//	return 0;
//}

////华氏摄氏温度转化表
//int main() {
//	int fahr, lower, upper;
//	double celsius;
//	printf("Enter lower:");
//	scanf_s("%d", &lower);
//	printf("Enter upper:");
//	scanf_s("%d",&upper);
//	if (lower <= upper) {
//		printf("fahr  celsius\n");
//		for (fahr = lower; fahr <= upper; fahr = fahr + 2) {
//			celsius = 5 * (fahr - 32) / 9;
//			printf("%4d%6.1f\n", fahr, celsius);
//		}
//	}
//	else {
//		printf("Invalid Value!\n");
//	}
//	system("pause");
//	return 0;
//}

////计算1+1/3+1/5+1/7...的前N项和
//int main() {
//	int n, i, deno=1;
//	double sum = 0;
//	printf("n:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum = sum + 1.0 / deno;
//		deno = deno + 2;
//	}
//	printf("sum=%.4f\n", sum);
//	system("pause");
//	return 0;
//}

////四个整数,算和与平均数
//int main() {
//	int num1, num2, num3, num4, sum;
//	double aver;
//	printf("num1:");
//	scanf_s("%d", &num1);
//	printf("num2:");
//	scanf_s("%d", &num2);
//	printf("num3:");
//	scanf_s("%d", &num3);
//	printf("num4:");
//	scanf_s("%d", &num4);
//	sum = num1 + num2 + num3 + num4;
//	printf("sum = %d\n", sum);
//	aver = (num1 + num2 + num3 + num4) / 4;
//	printf("aver = %.1f\n", aver);
//	system("pause");
//	return 0;
//}

//int main() {
//	int x;
//	double y;
//	printf("x:");
//	scanf_s("%d",&x);
//	if (x <= 50) {
//		y = 0.53 * x;
//	}
//	else {
//		y = 1.11 * x - 29;
//	}
//	printf("y = %.2lf", y);
//	system("pause");
//	return 0;
//}

////求1-2/3+3/5-...的前N项和
//int main() {
//	int n, i, deno, flag;
//	double item,number,sum;
//	sum = 0;
//	number = 1;
//	deno = 1;
//	flag = 1;
//	printf("Enter n:");
//	scanf_s("%d",&n);
//	for (i = 1; i <= n; i++) {
//		item = flag * number / deno;
//		sum = sum + item;
//		flag = -flag;
//		number = number + 1;
//		deno = deno + 2;
//	}
//	printf("sum = %f", sum);
//	system("pause");
//	return 0;
//}
//
////计算1+根号2+...的前N项和
//#include <math.h>
//int main() {
//	int n, i;
//	double sum=0;
//	printf("n:");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum = sum + sqrt(i);
//	}
//	printf("sum = %f", sum),
//		system("pause");
//	return 0;
//}

////3的乘方表
//#include <math.h>
//int main() {
//	int i, n;
//	double power;
//	printf("n:");
//	scanf_s("%d",&n);
//	for (i = 1; i <= n; i++) {
//		power = pow(3, i);
//		printf("pow(3,%d) = %.0f\n",i, power);
//	}
//	system("pause");
//	return 0;
//}

////求组合数
//double fact(int n);
//int main() {
//	int n, m;
//	double result;
//	printf("n:");
//	scanf_s("%d",&n);
//	printf("m:");
//	scanf_s("%d", &m);
//	if (m <= n) {
//		result = fact(n) / (fact(m)*fact(n - m));
//		printf("%f\n", result);
//	}
//	else {
//		printf("请重新输入！\n");
//	}
//	system("pause");
//	return 0;
//}
//double fact(int n) {
//	int i;
//	double product;
//	product = 1;
//	for (i = 1; i <= n; i++) {
//		product = product * i;
//	}
//	return product;
//}

////计算1!+2!+3!+....的前N项和
//double fact(int n);//自定义函数的声明
//int main() {
//	int n, i;
//	double sum=0;
//	printf("n:");
//	scanf_s("%d", &n);//输入，切记取地址符号
//	for (i = 1; i <= n; i++) {
//		sum =sum + fact(i);//调用函数fact
//	}
//	printf("sum = %f", sum);
//	system("pause");
//	return 0;
//}
//double fact(int n) {    //函数首部
//	int i;
//	double product=1;
//	for (i = 1; i <= n; i++) {//循环N次计算N！
//		product = product * i;
//	}
//	return product;//将结果送回主函数
//}

