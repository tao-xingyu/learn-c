#include<stdio.h>
#include<stdlib.h>
#if 0
//������������ / ������:��������������ִ����������,���������ø���������
int main() {
	printf("%f\n",(float) 5 / 2);//2.5
	printf("%f\n", 5 /(float)2);//2.5
	printf("%f\n",(float) (5 / 2));//2.0
	printf("%f\n", 5 / 2.0);//2.5
	printf("%f\n",2/5);//0
	system("pause");
	return 0;
}
//���Ʋ����� >>  :��һλ�൱��/2   ������λ:������λ
//���Ʋ�����<<   :��һλ�൱��*2
int main() {
	char ch = -1;
	ch = -1 >> 1;//����һλ
	printf("%d\n", ch);//������λ,��Ȼ��-1
	system("pause");
	return 0;
}
//��λ�� & :����������ֶ�Ϊ1,���Ϊ1,����Ϊ0;
//��λ�� | :����������ֶ�Ϊ0,���Ϊ0,����Ϊ1;
//��λȡ�� ~ :����������,0���1,1���0;
//��λ��� ^ :�������������ͬ,���Ϊ0,����Ϊ1;

//0����κ���,����������
int main() {
	int arr[] = { 1,2,3,6,3,2,1 };//�ҳ�Ψһ���Ǹ�����
	int i = 0;
	int ret = 0;
	for (i = 0; i < 7; i++) {
		ret = ret ^ arr[i];
	}
	printf("%d\n", ret);//6
	system("pause");
	return 0;
}
//���ű��ʽ:�����ֲ�������,����ֻȡ���һ����������
//sizeof():�����ڼ�ȷ�������ֽڵĴ�С,������������
//���ʽ1 && ���ʽ2    ���ʽ1Ϊ�����ټ���ִ��,��·��
//���ʽ1 || ���ʽ2     ���ʽ1Ϊ�����ټ���ִ��,��·��
//����������
//����if  for  ���ڵ���  �Ƚ���������С
int Func(int a, int b) {
	return(a - b) >> 31 ? -1 : (a - b ? 1 : 0);
	//                   С��         ���ڵ���
}
int main() {
	printf("%d\n", Func(1, 2));
	printf("%d\n", Func(2, 1));
	printf("%d\n", Func(1, 1));
	system("pause");
	return 0;
}
//��д����ʵ��:��һ�������������ڴ��еĶ�������1�ĸ���
//����1:
int main() {
	int n = 15;
	int count = 0;
	while (n) {
		if (n % 2 == 1) {
			count++;
		}
		n = n / 2;
	}
	printf("��������һ�ĸ���:%d\n", count);
	system("pause");
	return 0;
}
//�Ż�����2:
int main() {
	int n = -1;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++) {
		if (((n >> i) & 1) == 1) {
			count++;
		}
	}
	printf("��������һ�ĸ���:%d\n", count);
	system("pause");
	return 0;
}
//�Ż�����3:
int main() {
	int n = -1;
	int i = 0;
	int count = 0;
	while (n) {
		count++;
		n = n & (n - 1);
	}
	printf("��������һ�ĸ���:%d\n", count);
	system("pause");
	return 0;
}

int bin_search(int arr[], int len, int key) {
	int mid = 0;
	int left = 0;
	int right = len - 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (key > arr[mid]) {
			left = mid + 1;
		}
		else if (key < arr[mid]) {
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
int main() {
	int a[8] = { 1,3,4,6,23,45,67,89 };
	int len = sizeof(a) / sizeof(a[0]);
	int ret;
	ret = bin_search(a, len,22);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

void Swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void bubble(int arr[], int len) {
	int i, j;
	for (i = 1; i < len; i++) {
		for (j = 0; j < len - i; j++) {
			if (arr[j] > arr[j + 1]) {
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
int main() {
	int i;
	int arr[] = { 1,8,3,9,6,4,2,7,5,3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, len);
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
#endif
