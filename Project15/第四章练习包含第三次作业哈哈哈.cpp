#include <stdio.h>
#include <stdlib.h>
#include <math.h>

////Ƕ��ѭ����׳�
//int main() {
//	int i, j;
//	double item,sum;
//	sum = 0;
//	for (i = 1; i <= 100; i++) {
//		item = 1;
//		for (j = 1; j <= i; j++) //ѭ���ظ�i��,���i!
//			item = item * j;
//			sum = sum + item;//��i!�ӵ�sum��
//	}
//	printf("1!+2!+3!+....+100!=%e\n", sum);//ָ����ʽ������
//	system("pause");
//	return 0;
//}

//int main() {
//	int i, j,n;
//	double sum, deno;
//	sum = 1;
//	printf("Enter n: ");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) {
//		deno = 1;
//		for (j = 1; j <= i; j++)
//			deno = deno * j;
//		sum = sum + 1 / deno;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}

//int main() {
//	int x;
//	printf("Enter x:");
//	scanf_s("%d", &x);
//	while (x != 0) {
//		printf("%d", x % 10);
//		x = x / 10;
//	}
//	system("pause");
//	return 0;
//}

////���100���ڵ�����
//int main() {
//	int count, i, m, n;
//	count = 0;//��¼����
//	for (m = 2; m <= 100; m++) {
//		n = sqrt(m);
//		for (i = 2; i <= n; i++)
//			if (m % i == 0)
//				break;
//		if (i > n) {
//			printf("%6d", m);
//			count++;
//			if (count % 10 == 0)
//				printf("\n");
//
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

////����쳲�������ǰ8��
//int main() {
//	int x1, x2, x, i;
//	x1 = 1; 
//	x2 = 1;
//	printf("%6d%6d", x1, x2);
//	for (i = 1; i <= 8; i++) {
//		x = x1 + x2;
//		printf("%6d", x);
//		x1 = x2;
//		x2 = x;
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//��������
//int main() {
//	int num, sum;
//	sum = 0;
//	printf("Enter num:");
//	scanf_s("%d", &num);
//	while (num > 0) {
//		if (num % 2 != 0) {
//			sum = sum + num;
//		}
//		scanf_s("%d", &num);
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}

//��ӡ�����Ǻ�ͼ��
//int main() {
//	int n, i, j;
//	scanf_s("%d", &n);
//	for (i = 1 - n; i <= n - 1; i++){
//		for (j = 0; j < abs(i); j++)//abs()�����ֵ�ķ���
//			printf(" ");
//		for (j = 0; j < 2 * (n - abs(i)) - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


////������ֽ�����
//void pyramid(int n);
//int main(void) {
//	int n;
//	printf("Enter n:");
//	scanf_s("%d",&n);
//	pyramid(n);
//	system("pause");
//	return 0;
//}
//void pyramid (int n){
//	int i, j;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n - i; j++) {
//			printf(" ");
//		}
//		for (j = 1; j <= i; j++) {
//			printf(" ");
//			printf("%d", i);
//		}
//			putchar('\n');
//		
//	}
//}

////ʹ�ú�������ֶκ�����ֵ
//int sign (int x);
//int main() {
//	int x,y;
//	printf("Enter x:");
//	scanf_s("%d", &x);
//	sign(x);
//	system("pause");
//	return 0;
//}
//int sign(int x) {
//	int y;
//	if (x > 0) {
//		y = 1;
//		printf("f(x) = %d", y);
//	}
//    else if (x == 0) {
//		y = 0;
//		printf("f(x) = %d", y);
//	}
//	else{
//		y = -1;
//		printf("f(x) = %d", y);
//	}
//}


/////////////////////////////////��������ҵ
////����1-1/2+1/3-...+1/99-1/100��ֵ
//int main() {
//	int i, sign;
//	double sum, deno,item;
//	sum = 0;
//	sign = 1;
//	for (i = 1; i <= 100;++i) {
//		deno = i;
//		item =sign* 1 / deno;
//		sum = sum + item;
//		sign = -1;
//	}
//	printf("sum = %lf\n", sum);
//	system("pause");
//	return 0;
//}

////���1-100֮��9�ĸ����ж���
//int main() {
//	int count,i;
//	count = 0;
//	for (i =0; i < 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}if (i / 10 == 9) {
//			count++;
//	}
//	}
//	printf("result = %d\n",count);
//	system("pause");
//	return 0;
//}

////��������A������B�����ݣ�����A������B��������ͬ��
//void Swap(int*x, int*y);
//int main() {
//	int i,A[10], B[10];
//	printf("����������A�� ");
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &A[i]);
//	}
//	printf("����������B�� ");
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &B[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		Swap(&A[i], &B[i]);
//	}
//	for (i = 0; i < 10; i++) {
//			printf("%d\n", A[i]);
//		}
//	printf("\n");
//	for (i = 0; i < 10; i++){
//		printf("%d\n", B[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//void Swap(int*x, int*y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}