#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<math.h>
#include<time.h>
#if 0
int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1 - n; i <= n - 1; i+=2) {
		for (j = 0; j < abs(i); j++)//abs()�����ֵ�ķ���
			printf(" ");
		for (j = 0; j < 2 * (n - abs(i)) - 1; j++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}

int main()
{
	int i, j, n;
	for (i = 1 - 13; i <= 13 - 1; i+=2) {
		for (j = 0; j <= (13 - abs(i)) - 1; j++) {
			printf("*");//����ֵ
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

int main()
{
	int i, j;
	for (i = 1; i <= 13; i += 2) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 11; i >= 1; i -= 2) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

int main()
{
	int i = 0;
	int j;
	int sum = 0;
	for (j = 0; j <= 5; j++) {
		int	result = 1;
		for (i = 1; i <= j; i++) {
			result *= i;
			//sum = sum + result;
		}
		sum += result;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}

//���ֲ��ҷ�
int binaryserch(int arr[], int len, int key) {
	int mid;
	int left = 0;
	int right =len-1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (key > arr[mid]) {
			left = mid + 1;
		}
		else if(key<arr[mid]) {
			right = mid - 1;
		}
		else {
			break;
		}
	}
	if (key == arr[mid]) {
		return mid;
	}
	else {
		return -1;
	}
}
int main()
{
	int key;
	int arr[10] = {2,5,7,8,9,10,27,29,41};
	printf("������Ҫ���ҵ����֣�");
	scanf("%d", &key);
	int ret = binaryserch(arr, 10, key);
	if (ret == -1) {
		printf("û�ҵ�\n");
	}
	else {
		printf("���ҵ������±�Ϊ��%d\n",ret);
	}
	system("pause");
	return 0;
}

int main()
{
	char str1[] = "welcome bit";
	char str2[] = "***********";
	int left = 0;
	int right = strlen(str1) - 1;
	while (left <= right) {
		Sleep(100);
		str2[left] = str1[left];
		str2[right] = str1[right];
		left++;
		right--;
		printf("%s\n", str2);
	}
	system("pause");
	return 0;
}
#endif
////��ӡ�����Ǻ�ͼ��
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 13; i += 2) {
//		for (j = 1; j <= 13-i; j++) {
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 11; i >= 1; i -= 2) {
//		for (j = 1; j <= 13-i; j++) {
//			printf(" ");
//		}
//		for (j = 1; j <= 2*i-1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
//��ӡˮ�ɻ�����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000000; i++)
//	{
//		int count = 0;
//		int tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (i == sum)
//			printf("%d\n", i);
//	}
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
//��������Ϸ
//void menu(){
//	printf("******************************\n");
//	printf("**********  1.play  **********\n");
//	printf("**********  0.exit  **********\n");
//	printf("******************************\n");
//}
//void game(){
//	int randomnum = rand() % 100 + 1;
//	int input = 0;
//	while (1) {
//		printf("������µ����֣�");
//		scanf("%d", &input);
//		if (input > randomnum) {
//			printf("�´���\n");
//		}
//		else if (input < randomnum) {
//			printf("��С��\n");
//		}
//		else {
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main() {
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do {
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			printf("��ʼ��Ϸ��\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("ѡ��������������룡\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}
//
//int binsearch(int arr[], int len,int key) {
//	int left = 0;
//	int right =len - 1;
//	int mid;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] > key) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < key) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main() {
//	int x;
//	int arr[10] = {1,2,34,56,67,78,89,90,91,93};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ�ҵ����֣�");
//		scanf("%d", &x);
//	int ret = binsearch(arr,len,x);
//	if (ret == -1) {
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("�ҵ��ˣ��������±�Ϊ��%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//int primenum(int n) {
//	int i;
//	for (i = 2; i <= sqrt(n); i++){
//		if (n % 2 != 0) {
//			return n;
//		}
//		else {
//			return -1;
//		}
//		}
//}
//int main() {
//	int x;
//	int ret;
//	printf("����һ������");
//	scanf("%d", &x);
//	ret = primenum(x);
//	if (ret == -1) {
//		printf("����������\n");
//	}
//	else {
//		printf("��������\n");
//	}
//	system("pause");
//	return 0;
//}

//int Leap_year(int year) {
//	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
//		return year;
//	}
//	else {
//		return -1;
//	}
//}
//int main() {
//	int n = 2007;
//	int ret;
//	ret = Leap_year(n);
//	if (ret == -1) {
//		printf("�������꣡\n");
//	}
//	else {
//		printf("�����꣡\n");
//	}
//	system("pause");
//	return 0;
//}

//int add(int *p) {
//	(*p)++;
//}
//int main() {
//	int num =0;
//	int ret = add(&num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}

//void Func1(unsigned int n) {
//	int tmp;
//	if (n > 9) {
//		n / 10 = tmp;
//		tmp = n % 10;
//	}
//}
//int main() {
//	int num = 1234;
//	Func1(num);
//	printf("%d ",&num);
//	system("pause");
//	return 0;
//}
//���ַ�������
//int MyStrlen(char*str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	return 1 + MyStrlen(str + 1);
//}
//int main() {
//	char *p = "hello";
//	int ret = MyStrlen(p);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}