#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//#if 0
////�о��ڴ沼����û�������
//struct A {
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main() {
//	printf("%d\n", sizeof(struct A));//���Ϊ8
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
//		while ((*left & 1) == 1) {//ż��λ
//			left++;
//		}
//		while ((*right & 1) == 0) {//����λ
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
//	int tmp = arr[i][j];//����һ�������ڲ���ֵ,λ�ڶ�ά��������Ͻ�
//	while (1) {//����Ϊ��ʱ,����ѭ��
//		if (x == tmp) {//����ҵ������,����1
//			return 1;
//		}
//		else if (x > tmp&&i < ROW - 1) {//��Ҫ�ҵ����ֵ���ڲο���
//			tmp = arr[i++][j];//�ο�������+1,�б��ֲ���
//		}
//		else if (x < tmp&&j > 0) {//��Ҫ�ҵ������С�ڲο���
//			tmp = arr[i][j--];//�ο������в���,��-1;
//		}
//		else {
//			return 0;//�Ҳ����������,����0
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
//		printf("���ҳɹ�!\n");
//	}
//	else {
//		printf("����ʧ��!\n");
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
//	while (a % b!=0) {//շת�����
//		t = a % b;
//		a = b;
//		b = t;//������Ŀ�ľ����ó���������������
//	}
//	if (b == 1) {
//		printf("��������ֻ��ͬʱ��1����\n");
//	}
//	else {
//		printf("�������������Լ��Ϊ:%d\n", b);
//	}
//	system("pause");
//	return 0;
//}
//#endif
char* Rotate(char*p, int k) {
	//char *p1 = p;//����һ���µ�ָ�����
	int len = strlen(p);// - 1;
	int i = 0;
	int j = 0;
	for (i = 0; i < k; ++i)
	{
		char tmp = p[0];//����һ����ʱ�������ѵ�һ���ַ���ֵ��tmp��
		for (j = 0; j < len; ++j)
		{
			p[j] = p[j + 1];//�ַ�����ǰ��һ��λ��
		}
		p[len-1] = tmp;//����ʱ������ֵ�����һ��λ��
	}
	return p;
}
int main() {
	char a[100];
	scanf("%s", a);
	int k = 0;
	printf("��������Ҫ��ת���ַ�����:");
	scanf("%d", &k);
	if (k > (int)strlen(a)) {
		printf("��������!\n");
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
//	//����ѭ����ÿһλ������ת��Ȼ�������ַ������бȽ�
//	for (j = 1; j <= len; j++)
//	{
//		{
//			int tem = str1[0];  //���ַ������ַ�����tem          
//			for (i = 0; i < len - 1; i++)    //����        
//			{
//				str1[i] = str1[i + 1];
//			}
//			str1[len - 1] = tem;  // �����ַ��������һλ    
//		}
//		if (0 == strcmp(str1, str2))//�ж������ַ����Ƿ����,��Ⱦ͵���0,����1
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

