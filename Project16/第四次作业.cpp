#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

////����Ұ������
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
//			printf("ˮ�ɻ���  ���У�%d", n);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0; 
//}

////���Sn=a+aa+aaa+aaaa+aaaaa��ǰ�����
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
///////////////////////////////////////���ϵ��Ĵ���ҵ�����µ����/////////////////////////////

////��������Ϸ
//int main() {
//	int num1, num2, i;
//	printf("Enter num1:");
//		scanf("%d",&num1);
//		for (i = 0; i < 6; i++) {
//		printf("Enter num2:");
//		scanf("%d",&num2);
//		if (num2 > num1) {
//			printf("��µ����ݴ��ˣ�\n");
//		}
//		if (num2 < num1) {
//			printf("��µ�����С�ˣ�\n");
//		}
//		if (num2 == num1) {
//			printf("��Ӯ��!\n");
//			break;
//		}
//		if (i == 5) {
//			printf("�����ˣ���ȷ��Ϊ��%d\n", num1);
//			break;
//		}
//		}
//	system("pause");
//	return 0;
//}

////���ֲ��ң��ҵ���Ҫ�����֣��ҵ���ӡ�±꣬�Ҳ������1
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = arr[0];
//	int k;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("���ҵ������ǣ�");
//		scanf("%d",&k);
//	while (left <= right) {
//		int mid = left + (right - left) / 2;
//		if (arr[mid] == k) {
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
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
//		printf("û���ҵ�,-1\n");
//	}
//	system("pause");
//	return 0;
//}
//

////������������ĳ���
//int main() {
//	int i, pass1,pass2;
//	printf("��ȷ����:");
//	scanf("%d", &pass1);
//	for (i = 1; i <= 3; i++) {
//		printf("��������:");
//		scanf("%d", &pass2);
//		if (pass2 != pass1) {
//			printf("�������,����������!\n");
//		}
//		if (pass2 == pass1) {
//			printf("��½�ɹ�!\n");
//			break;
//		}
//		if (i == 3) {
//			printf("���˳�����!\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

////�����ַ���,��Сд����,���ֲ����,����һֱ�Ӽ��̽����ַ�
//int main() {
//	int ch=0;
//	printf("�������ַ�:\n");
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

//////////////////////////////////////////////////////////////////�����ǵ�������ҵ

////ʹ�ý�������ʵ���������Ľ���
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
//	printf("�������:%d %d", x, y);
//	system("pause");
//	return 0;
//}

////ʵ��һ�������ж�YEAR�Ƿ�������
//int Leap_year(int y) {
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
//		printf("������!\n");
//	}
//	else {
//		printf("��������!\n");
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

////ʵ��һ�������ж�һ�����Ƿ�Ϊ����
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
//	printf("������һ������һ������:");
//	scanf("%d", &num);
//	ret = prime_number(num);
//	if (ret == 1) {
//		printf("%d ������", num);
//	}
//	else {
//		printf("%d ��������", num);
//	}
//	system("pause");
//	return 0;
//}
//
////��ӡ�˷��ھ���,ʹ�ú���,�����Լ�ָ��
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

//void Init(int arr[], int len) {//�����ʼ��
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		arr[i] = i;
//	}
//}
//void Empty(int arr[], int len) {//������0
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		arr[i] = '\0';
//	}
//}
//void Reverse(int arr[], int len){ //��������
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		arr[i] = len - 1 - i;
//	}
//}
//void Show(int arr[], int len) {////��ӡ����
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
//	Show(arr, len);//��ӡ
//	Empty(arr, len);
//	Show(arr, len);//��ӡ
//	Reverse(arr, len);
//	Show(arr, len);//��ӡ
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


////���ֲ���
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
//			printf("�ҵ���,�±���%d", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ���!");
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
//	printf("������쳲���������λ��:\n");
//	scanf("%d", &n);
//	int ret = fibonacci(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//////////���������õݹ麯����쳲��������еĵ�N���
//////////����Ϊ��ͨ������쳲��������ĵ�N��

//int main() {
//	int n;
//	printf("������Ҫ���쳲���������λ��:\n");
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
//	Student s = { 100,"����",5 };
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

////����ʵ��n^k,ʹ�õݹ�ʵ��
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

////ʵ�����������������
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
//	printf("����һ������:");
//	scanf("%d", &n);
//	reverse(n);
//	system("pause");
//	return 0;
//}

                                //��Ҫ��ס��һ����
//int main() {          
//	int num = 10;      
//	int num2 = 20;              //const������ǰ��������м�,����ָ��ָ�������
//	const int*  p = &num;       //const����*�ͱ���֮��,���������޸�ָ���б���ĵ�ַ
//	//*p = 20;//�޸�ָ��ָ�������
//	p = &num2;//�޸�ָ���б���ĵ�ַ
//	system("pause");
//	return 0;
//}


