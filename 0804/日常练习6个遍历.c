#include <stdio.h>
#include <stdlib.h>

/*
1�����ֱ���
for(i = a;i < b;i++){
     i����˶�����[a,b)�ı���
}

2���������
for(i = 0;i < n;i++){
     arr[i]����ɣ��������ÿ��Ԫ�صı���
}

3����λ����
for(i = n;i;i /= m){
     i % m�����������n��m������ÿһλ�ı���
}

4���ַ�������
for(i = 0;str[i];i++){
     str[i]����˶��ַ���str�ı���
}

5���������
for(cur = head;cur;cur = cur->next){
       cur����˶�����ÿ���ڵ�ı���
}

6����������
for(it = v.begin();it !=v.end();it++ ){
      ������it����˶�����v�ı���
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
	int max=a[0];                        //maxӦ��ȡint�¼�Сֵ��-2147483648����0x80000000
	int i;
	for (i = 1; i < 10; i++) {           //ȡ��Сֵ����ôi = 0������Сֵ��ʼ
		if (a[i]>max) {
			max = a[i];
		}
	}
	printf("%d", max);
	system("pause");
	return 0;
}

//��ӡ�δ�ֵ
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

//�����������Լ��
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
		printf("��������\n");
		return 0;

	}
	printf("%d��%d�����Լ����%d", a, b, max);
	system("pause");
	return 0;
}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 5,4,3,2,1 };
	int tmp, i;
	printf("����a:");
	for (i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
	printf("����b:");
	for (i = 0; i < 5; i++) {
		printf("%d", b[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	printf("����a:");
	for (i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
	printf("����b:");
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
		sum = sum + item;           //sum = sum +i<�ۼ�ģ��>
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
		for (j = 1; j <= n - i; j++) {//С�ں�����һ�Σ�!!!
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
			printf("*");//����ֵ
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
#endif
//��ӡ�����Ǻ�ͼ��
//int main() {
//	int n, i, j;
//	scanf("%d", &n);
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
