#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#if 0
//ˮ�ɻ�
//int main() {
//	int i = 0;
//	for (i = 0; i <= 999999; i++) {
//		int count = 0;
//		int sum = 0;
//		int tmp;
//		tmp = i;
//		while (tmp) {
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp) {
//			sum += (int)pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i) {
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
////�����������Լ��
//int main() {
//	int a, b, t,i;
//	printf("Enter number:");
//	scanf("%d%d",&a,&b);
//	if (a > b) {
//		t = a;
//		a = b;
//		b = t;
//	}
//	for (i = a; i >= 2; i--) {
//		if (a%i == 0 && b%i == 0) {
//			printf("���Լ��Ϊ%d\n", i);
//			break;
//		}
//	}
//	if (i == 1) {
//		printf("��������ֻ�ܱ�1����\n");
//	}
//	system("pause");
//	return 0;
//}
//void Menu() {
//	printf("*********************\n");
//	printf("*********************\n");
//	printf("*******1.play********\n");
//	printf("*******0.exit********\n");
//	printf("*********************\n");
//	printf("*********************\n");
//}
//void Game() {
//	int res = rand() % 100 + 1;
//	while (1) {
//		int num = 0;
//		printf("��������µ�����:");
//		scanf("%d", &num);
//		if (num > res) {
//			printf("�´���!\n");
//		}
//		else if (num < res) {
//			printf("��С��!\n");
//		}
//		else {
//			printf("��ϲ��,�¶���!\n");
//			break;
//		}
//	}
//}
//int main() {
//	int input;
//	srand((unsigned)time(NULL));
//	do {
//		Menu();
//		printf("���������ѡ��:");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			Game();
//			break;
//		case 0:
//			printf("��Ϸ�˳�\n");
//			break;
//		default:
//			printf("������������,����������\n");
//			break;
//		}
//	break;
//	} while (input);
//	system("pause");
//	return 0;
//}
//int two(int arr[], int len,int key) {
//	int mid;
//	int left = 0;
//	int right = len - 1;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (key > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (key < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			break;
//		}
//	}
//	if (key == arr[mid]) {
//		return mid;
//	}
//	else {
//		return -1;
//	}
//}
//int main() {
//	int n, ret;
//	int a[] = { 1,3,5,8,9,23,45,78 };
//	int len = sizeof(a) / sizeof(a[0]);
//	printf("Enter number:");
//	scanf("%d", &n);
//	ret = two(a,len,n);
//	if (ret < 0) {
//		printf("û���ҵ�!\n");
//	}
//	else {
//		printf("�ҵ���,�������±�Ϊ:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//int main() {
//	char password[] = "123456";
//	int i;
//	
//	for (i = 0; i < 3; i++) {
//		printf("Enter input:");
//		scanf("%s", password);
//		int ret = strcmp("123456", password);
//		if (ret == 0) {
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//		else if(i < 2){
//			printf("�������!����������\n");
//		}
//		if (i == 2 && ret != 0) {
//			printf("�������,�˳�����!\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main() {
//	int ch = 0;
//	printf("������һ���ַ�:\n");
//	while ((ch = getchar(0)) != EOF) {
//		if (ch >= 'a'&&ch <= 'z') {
//			printf("%c", ch - 'a' + 'A');
//		}
//		if (ch >= 'A'&&ch <= 'Z') {
//			printf("%c", ch - 'A' + 'a');
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//void fun(int n) {
//	int i, j;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%3d*%d=%d", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	fun(12);
//	system("pause");
//	return 0;
//}
//void Swap(int* x, int* y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a = %d\nb = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//void run(int year) {
//	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
//		printf("������\n");
//	}
//	else {
//		printf("��������\n");
//	}
//}
//int main() {
//	run(2009);
//	system("pause");
//	return 0;
//}


void init(int arr[],int len) {
	int i;
	for (i = 0; i < len; i++) {
		arr[i] = i + 1;
	}
}

void empty(int arr[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		arr[i] = 0;
	}
}
void reverse(int arr[], int len) {
	int left = 0;
	int right = len - 1;
	int tmp;
		while (left < right) {
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
}
void print(int arr[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main() {
	int a[] = { 4,5,6,7,8,9 };
	int len = sizeof(a) / sizeof(a[0]);
	init(a, len);
	print(a, len);
	empty(a, len);
	print(a, len);
	reverse(a, len);
	print(a, len);
	system("pause");
	return 0;
}

//
//void sushu(int n) {
//	int i;
//	for (i = 2; i <= sqrt(n); i++) {
//		if (n%i == 0) {
//			printf("��������\n");
//			break;
//		}
//		else{
//			printf("������\n");
//		}
//	}
//}
//int main() {
//	sushu(12);
//	system("pause");
//	return 0;
//}
