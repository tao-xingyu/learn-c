#include<stdio.h>
#include<stdlib.h>
#if 0
int main() {
	int sum = 0;
	int a[10] = { 1,2,3,3,2,1,4,5,7,7 };
	int i;
	for (i = 0; i < 10; i++) {
		sum ^= a[i];//��������ͬ�������Ľ������sum��
	}
	int n;
	for (i = 0; i < 32; i++) {
		if (sum >> i & 1) {
			n = i;//������Ϊ1,��Ϊn
			break;
		}
	}
	int sum1 = 0;
	int sum2 = 0;
	for (i = 0; i < 10; i++) {
		if (a[i] >> n & 1) {
			sum1 ^= a[i];//��������1
		}
		else {
			sum2 ^= a[i];//�����0
		}
	}
	printf("%d %d\n", sum1, sum2);
	system("pause");
	return 0;
}
int main() {
	int n = 20;
	int sum = 0;
	int ex = 0;//��ƿ����
	int i;
	for (i = n;i>0; i /= 2) {
		sum += i;
		i += ex;
		ex = i % 2;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
#endif
char* strcpy(char* dst, const char* src) {
	char* tmp = dst;
	while (*dst++ = *src++) {
		return tmp;
	}
}