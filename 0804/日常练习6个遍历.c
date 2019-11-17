#include <stdio.h>
#include <stdlib.h>

/*
1、数字遍历
for(i = a;i < b;i++){
     i完成了对数字[a,b)的遍历
}

2、数组遍历
for(i = 0;i < n;i++){
     arr[i]就完成；额对数组每个元素的遍历
}

3、数位遍历
for(i = n;i;i /= m){
     i % m就完成了数字n在m进制下每一位的遍历
}

4、字符串遍历
for(i = 0;str[i];i++){
     str[i]完成了对字符串str的遍历
}

5、链表遍历
for(cur = head;cur;cur = cur->next){
       cur完成了对链表每个节点的遍历
}

6、容器遍历
for(it = v.begin();it !=v.end();it++ ){
      迭代器it完成了对容器v的遍历
}
*/
#if 0
int main()
{
	int tmp,a = 7, b = 10;
	tmp = a;
	a = b;
	b = tmp;
	printf("a = %d b = %d", a, b);
	system("pause");
	return 0;
}
int main()
{
	int a[10] = { -1,3,4,5,6,1,2,3,4,5 };
	int max=a[0];                        //max应该取int下极小值，-2147483648或者0x80000000
	int i;
	for (i = 1; i < 10; i++) {           //取最小值，那么i = 0，从最小值开始
		if (a[i]>max) {
			max = a[i];
		}
	}
	printf("%d", max);
	system("pause");
	return 0;
}

//打印次大值
int main()
{
	int a[10] = { 1,2,3,4,5,3,4,4,2,8 };
	int i,sec;
	int max = 0x80000000;
	for (i = 0; i < 10; i++) {
		if (max < a[i]) {
			sec = max;
			max = a[i];
		}
		else if (sec < a[i]) {
			sec = a[i];
		}
	}
	printf("%d", sec);
	system("pause");
	return 0;
}

//两个数的最大公约数
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int smaller = a < b ? a : b;
	int i;
	int max = 0;
	for (i = 1; i <= smaller; i++) {
		if (a % i == 0 && b % i == 0) {
			max = i;
		}
		}
	if (max == 1) {
		printf("两数互质\n");
		return 0;

	}
	printf("%d和%d的最大公约数是%d", a, b, max);
	system("pause");
	return 0;
}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 5,4,3,2,1 };
	int tmp, i;
	printf("数组a:");
	for (i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
	printf("数组b:");
	for (i = 0; i < 5; i++) {
		printf("%d", b[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	printf("数组a:");
	for (i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
	printf("数组b:");
	for (i = 0; i < 5; i++) {
		printf("%d", b[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

int main()
{
	int i;
	double flag = 1,item,sum = 0;
	for (i = 1; i <= 100; i++) {
		item = flag * 1.0 / i;
		sum = sum + item;           //sum = sum +i<累加模板>
		flag *= -1;
	}                           
	printf("%f\n", sum);
	system("pause");
	return 0;
}

int main()
{
	int i, j;
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {//小于号忘加一次！!!!
			putchar(' ');
		}
		for (j = 1; j <= 2*i-1; j++) {
			putchar('*');
		}
		putchar('\n');
		}
	system("pause");
	return 0;
}

int main()
{
	int i, j, n;
	for (i = 1 - 13; i <= 13 - 1; i++) {
		for (j = 0; j < (13 - abs(i)) - 1; j++) {
			printf("*");//绝对值
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
#endif
//打印菱形星号图案
//int main() {
//	int n, i, j;
//	scanf("%d", &n);
//	for (i = 1 - n; i <= n - 1; i++){
//		for (j = 0; j < abs(i); j++)//abs()求绝对值的符号
//			printf(" ");
//		for (j = 0; j < 2 * (n - abs(i)) - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
