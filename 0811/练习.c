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


//void����ָ��,ֻ���Խ��е�ַ�ı���,�����Խ���ָ�������
//�͵�ַ ������ С��
//�͵�ַ ������ ���




//��ָ�� ȥ��* ��sizeof<ָ��ļӼ���>
//���ʼ����ֽ� �����ü����ֽ�<ָ��Ľ�Ӧ��>

//��������������������������������ֵ
//int(*p)=&arr����ָ��
//printf("%p\n", arr);������Ԫ�ص�ַ
//printf("%p\n", &arr[0]);������Ԫ�ص�ַ
//printf("%p\n", &arr);��������ĵ�ַ
//printf("%p\n", &arr+1)����������ĵ�ַ
//printf("%p\n", arr+1)��һ���ֽ�

//ָ��-ָ��:����ָ��ָ��ͬһ���ڴ��ʱ��
//����ָ���ŵ���ָ��ĵ�ַ

//����ָ��:ָ�������ָ��   int(*p)[3]
//ָ������:���ָ�������   int*arr[3]

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
	printf("ż��λΪ:");
	for (i = 31; i > 0; i -= 2) {
		printf("%d", arr[i]);
	}
	printf("\n");
	printf("����λΪ:");
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
	ret = x ^ y;//����������λ���,��ͬΪ0,��ͬΪ1
	while (ret) {
		ret = ret & (ret - 1);
		count++;//ͳ��1�ĸ���
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
		//���������Ϊ��������1,��֮����0,��������һ��,(1+1+0+1=3)
		if (((x != 'A') + (x == 'C') + (x == 'D') + (x != 'D')) == 3) {
			printf("������x��:%c\n", x);
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
		printf("����������:");
		scanf("%d", &n);
	}
	for (i = 1; i < n; i++) {//ȷ������
		arr[i][0] = 1;//ÿһ�е�һ������ʼ��Ϊ1
		for (j = 1; j <= i; j++) {//�����ַ���,ȷ����
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//�趨�м�ֵ
		}
	}
	for (i = 0; i < n; i++) {//���д�ӡ��ά����
		for (j = 0; j <= i; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");

	}
	system("pause");
	return 0;
}
#endif

