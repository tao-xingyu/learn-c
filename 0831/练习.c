#include<stdio.h>
#include<stdlib.h>
#if 0
int main() {

	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4 a+0得到了一个指针
	printf("%d\n", sizeof(*a));//4 *a就相当于*(a+0),a[0]得到了1这个整数
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4 &a是一个数组指针
	printf("%d\n", sizeof(*&a));//16  &a是数组指针,再*就得到了整个数组
	printf("%d\n", sizeof(&*a));//4 *a=>int,再取地址得到int*
	printf("%d\n", sizeof(&a+1));//4 &a是数组指针+1还是数组指针
	printf("%d\n", sizeof(&a[0]));//4 a[0]得到了int,&所以就得到了int*
	printf("%d\n", sizeof(&a[0]+1));//4  指针+1仍然是指针


	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6 字符数组
	printf("%d\n", sizeof(arr+0));//4 数组名运算=>指针
	printf("%d\n", sizeof(*arr));//1 对数组名解引用
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4 数组指针
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[0]+1));//4
	printf("%d\n", sizeof(arr[0]+1));//4 整型提升int

	printf("%d\n", strlen(arr));//未定义行为,这不是字符串
	printf("%d\n", strlen(arr+0));//仍然是未定义行为
	printf("%d\n", strlen(*arr));//类型不匹配,*arr是char型,未定义行为
	printf("%d\n", strlen(arr[1]));//未定义行为
	printf("%d\n", strlen(&arr));//一个是字符指针,一个是数组指针,未定义行为
	printf("%d\n", strlen(&arr+1));//未定义行为
	printf("%d\n", strlen(&arr[0]+1));//未定义行为


	char p[] = "abcdef";
	printf("%d\n", sizeof(p));//7  有'\0'
	printf("%d\n", sizeof(p+0));//4  指针
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(*p+1));//4 整型提升
	printf("%d\n", sizeof(p[1]));//1
	printf("%d\n", sizeof(&p));//4 数组指针
	printf("%d\n", sizeof(&p+1));//4 数组指针
	printf("%d\n", sizeof(&p[1]+1));//4  仍然是指针


	printf("%d\n", strlen(p));//6 字符串的长度,不算'\0'
	printf("%d\n", strlen(p+0));//6  p与p+0无区别
	printf("%d\n", strlen(*p));//未定义行为
	printf("%d\n", strlen(p[1]));//未定义行为
	printf("%d\n", strlen(&p));//6 不同类型 但碰巧结果一样
	printf("%d\n", strlen(&p+1));//未定义行为
	printf("%d\n", strlen(&p[0] + 1));//5  指向'b'的位置开始向后计算


	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4 首元素地址的指针
	printf("%d\n", sizeof(p+1));//4 指针+1,仍然是指针
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4 char**二级指针
	printf("%d\n", sizeof(&p+1));//4 指针
	printf("%d\n", sizeof(&p[0]+1));//4

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p+1));//5 
	printf("%d\n", strlen(*p));//未定义行为
	printf("%d\n", strlen(p[0]));//未定义行为
	printf("%d\n", strlen(&p));//未定义行为,二级指针
	printf("%d\n", strlen(&p+1));//未定义行为
	printf("%d\n", strlen(&p[0]+1));//5
	  

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0]+1));//4 a[0]得到一个数组,+1隐式转化为指针
	printf("%d\n", sizeof(*(a[0]+1)));//4  *(a[0]+1) => a[0][1]   {*(p+1)=>p[0]}
	printf("%d\n", sizeof(a+1));//4  二维数组+1变成数组指针
	printf("%d\n", sizeof(&a[0]+1));//4  数组指针
	printf("%d\n", sizeof(*(a + 1)));//16  等价于a[1]
	printf("%d\n", sizeof(*(&a[0]+1)));//16 数组指针解引用就是数组
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16 不是下标越界,因为是在编译过程中求解

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
	printf("%p\n", p + 0x1);//20个字节转化为16进制,=>14
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
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//圆括号!
	int *p;
	p = a[0];
	printf("%d", p[0]);//逗号表达式,取1
	system("pause");
	return 0;
}
int main()
{
	int a[5][5];
	int(*p)[4];//p是一个数组指针
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	system("pause");
	return 0;
}
int main() {
	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int *ptr1 = (int *)(&a + 1);//跳过整个一位数组
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
