#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//#if 0
////研究内存布局是没有意义的
//struct A {
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main() {
//	printf("%d\n", sizeof(struct A));//结果为8
//	system("pause");
//	return 0;
//}
//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//int main() {
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//16
//	system("pause");
//	return 0;
//}
//
//
//void Swap(int *left, int len) {
//	int *right = left + len - 1;
//	int tmp;
//	assert(right != NULL);
//	while (left < right) {
//		while ((*left & 1) == 1) {//偶数位
//			left++;
//		}
//		while ((*right & 1) == 0) {//奇数位
//			right--;
//		}
//		if (left < right) {
//			tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,4,2,5,7,3,4,2,8,6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	Swap(arr, len);
//	for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#define ROW 4
//#define COL 4
//int Search(int arr[ROW][COL], int x) {
//	int i = 0;
//	int j = COL - 1;
//	int tmp = arr[i][j];//给定一个数组内部的值,位于二维数组的右上角
//	while (1) {//条件为假时,跳出循环
//		if (x == tmp) {//如果找到这个数,返回1
//			return 1;
//		}
//		else if (x > tmp&&i < ROW - 1) {//当要找的这个值大于参考数
//			tmp = arr[i++][j];//参考数的行+1,列保持不变
//		}
//		else if (x < tmp&&j > 0) {//当要找的这个数小于参考数
//			tmp = arr[i][j--];//参考数的行不变,列-1;
//		}
//		else {
//			return 0;//找不到的情况下,返回0
//		}
//	}
//}
//int main() {
//	int arr[ROW][COL] = {
//		{1,2,3,4},
//		{2,3,6,9},
//		{3,4,7,12}
//	};
//	int n = 0;
//	printf("Enter number:");
//	scanf("%d", &n);
//	int ret = Search(arr, n);
//	if (ret == 1) {
//		printf("查找成功!\n");
//	}
//	else {
//		printf("查找失败!\n");
//	}
//	system("pause");
//	return 0;
//}
//int main() {
//	int a, b,t,tmp;
//	printf("Enter number:");
//	scanf("%d%d", &a, &b);
//	if (a < b) {
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (a % b!=0) {//辗转相除法
//		t = a % b;
//		a = b;
//		b = t;//交换的目的就是让除数继续除以余数
//	}
//	if (b == 1) {
//		printf("这两个数只能同时被1整除\n");
//	}
//	else {
//		printf("这两个数的最大公约数为:%d\n", b);
//	}
//	system("pause");
//	return 0;
//}
//#endif
char* Rotate(char*p, int k) {
	//char *p1 = p;//创建一个新的指针变量
	int len = strlen(p);// - 1;
	int i = 0;
	int j = 0;
	for (i = 0; i < k; ++i)
	{
		char tmp = p[0];//创建一个临时变量并把第一个字符赋值到tmp中
		for (j = 0; j < len; ++j)
		{
			p[j] = p[j + 1];//字符依次前进一个位置
		}
		p[len-1] = tmp;//将临时变量赋值到最后一个位置
	}
	return p;
}
int main() {
	char a[100];
	scanf("%s", a);
	int k = 0;
	printf("请输入你要旋转的字符个数:");
	scanf("%d", &k);
	if (k > (int)strlen(a)) {
		printf("输入有误!\n");
	}
	Rotate(a, k);
	printf("%s\n", a);
	system("pause");
	return 0;
}
//int judge(char str1[], char str2[])
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(str1);
//	//依次循环将每一位向左旋转，然后将两个字符串进行比较
//	for (j = 1; j <= len; j++)
//	{
//		{
//			int tem = str1[0];  //将字符串首字符赋给tem          
//			for (i = 0; i < len - 1; i++)    //左旋        
//			{
//				str1[i] = str1[i + 1];
//			}
//			str1[len - 1] = tem;  // 将首字符赋给最后一位    
//		}
//		if (0 == strcmp(str1, str2))//判断两个字符串是否相等,相等就等于0,返回1
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char s1[10] = "EABCD";
//	char s2[10] = "ABCDE";
//	printf("s1 = %s\n", s1);
//	printf("s2 = %s\n", s2);
//	printf("%d\n", judge(s1, s2));
//	system("pause");
//	return 0;
//}

