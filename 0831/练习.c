#include<stdio.h>
#include<stdlib.h>
#if 0
int main() {

	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4 a+0�õ���һ��ָ��
	printf("%d\n", sizeof(*a));//4 *a���൱��*(a+0),a[0]�õ���1�������
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4 &a��һ������ָ��
	printf("%d\n", sizeof(*&a));//16  &a������ָ��,��*�͵õ�����������
	printf("%d\n", sizeof(&*a));//4 *a=>int,��ȡ��ַ�õ�int*
	printf("%d\n", sizeof(&a+1));//4 &a������ָ��+1��������ָ��
	printf("%d\n", sizeof(&a[0]));//4 a[0]�õ���int,&���Ծ͵õ���int*
	printf("%d\n", sizeof(&a[0]+1));//4  ָ��+1��Ȼ��ָ��


	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6 �ַ�����
	printf("%d\n", sizeof(arr+0));//4 ����������=>ָ��
	printf("%d\n", sizeof(*arr));//1 ��������������
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4 ����ָ��
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[0]+1));//4
	printf("%d\n", sizeof(arr[0]+1));//4 ��������int

	printf("%d\n", strlen(arr));//δ������Ϊ,�ⲻ���ַ���
	printf("%d\n", strlen(arr+0));//��Ȼ��δ������Ϊ
	printf("%d\n", strlen(*arr));//���Ͳ�ƥ��,*arr��char��,δ������Ϊ
	printf("%d\n", strlen(arr[1]));//δ������Ϊ
	printf("%d\n", strlen(&arr));//һ�����ַ�ָ��,һ��������ָ��,δ������Ϊ
	printf("%d\n", strlen(&arr+1));//δ������Ϊ
	printf("%d\n", strlen(&arr[0]+1));//δ������Ϊ


	char p[] = "abcdef";
	printf("%d\n", sizeof(p));//7  ��'\0'
	printf("%d\n", sizeof(p+0));//4  ָ��
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(*p+1));//4 ��������
	printf("%d\n", sizeof(p[1]));//1
	printf("%d\n", sizeof(&p));//4 ����ָ��
	printf("%d\n", sizeof(&p+1));//4 ����ָ��
	printf("%d\n", sizeof(&p[1]+1));//4  ��Ȼ��ָ��


	printf("%d\n", strlen(p));//6 �ַ����ĳ���,����'\0'
	printf("%d\n", strlen(p+0));//6  p��p+0������
	printf("%d\n", strlen(*p));//δ������Ϊ
	printf("%d\n", strlen(p[1]));//δ������Ϊ
	printf("%d\n", strlen(&p));//6 ��ͬ���� �����ɽ��һ��
	printf("%d\n", strlen(&p+1));//δ������Ϊ
	printf("%d\n", strlen(&p[0] + 1));//5  ָ��'b'��λ�ÿ�ʼ������


	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4 ��Ԫ�ص�ַ��ָ��
	printf("%d\n", sizeof(p+1));//4 ָ��+1,��Ȼ��ָ��
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4 char**����ָ��
	printf("%d\n", sizeof(&p+1));//4 ָ��
	printf("%d\n", sizeof(&p[0]+1));//4

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p+1));//5 
	printf("%d\n", strlen(*p));//δ������Ϊ
	printf("%d\n", strlen(p[0]));//δ������Ϊ
	printf("%d\n", strlen(&p));//δ������Ϊ,����ָ��
	printf("%d\n", strlen(&p+1));//δ������Ϊ
	printf("%d\n", strlen(&p[0]+1));//5
	  

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0]+1));//4 a[0]�õ�һ������,+1��ʽת��Ϊָ��
	printf("%d\n", sizeof(*(a[0]+1)));//4  *(a[0]+1) => a[0][1]   {*(p+1)=>p[0]}
	printf("%d\n", sizeof(a+1));//4  ��ά����+1�������ָ��
	printf("%d\n", sizeof(&a[0]+1));//4  ����ָ��
	printf("%d\n", sizeof(*(a + 1)));//16  �ȼ���a[1]
	printf("%d\n", sizeof(*(&a[0]+1)));//16 ����ָ������þ�������
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16 �����±�Խ��,��Ϊ���ڱ�����������

	system("pause");
	return 0;
}
int main() {
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int *)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	system("pause");
	return 0;//2,5
}

struct test {
	int num;
	char* pcname;
	short date;
	char cha[2];
	short ba[4];
}*p;
int main() {
	printf("%p\n", p + 0x1);//20���ֽ�ת��Ϊ16����,=>14
	printf("%p\n", (unsigned long)p + 0x1);//0+1=1
	printf("%p\n", (unsigned int*)p + 0x1);//4
	system("pause");
	return 0;
}

int main() {
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int *)(&a + 1);
	int* ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);//4,2000000
	system("pause");
	return 0;
}
int main(int argc, char * argv[])
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//Բ����!
	int *p;
	p = a[0];
	printf("%d", p[0]);//���ű��ʽ,ȡ1
	system("pause");
	return 0;
}
int main()
{
	int a[5][5];
	int(*p)[4];//p��һ������ָ��
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	system("pause");
	return 0;
}
int main() {
	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int *ptr1 = (int *)(&a + 1);//��������һλ����
	int *ptr2 = (int *)(*(a + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	system("pause");
	return 0;//10,5
}
#endif
int main() {
	char* a[] = { "work","at","alibaba" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);
	system("pause");
	return 0;
}
