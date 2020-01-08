#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#if 0
int main() {
	FILE* pFile;
	pFile = fopen("example.txt", "wb");
	fputs("this is a apple.", pFile);
	fseek(pFile, 9, SEEK_SET);
	fputs("sa", pFile);
	fclose(pFile);
	system("pause");
	return 0;
}
int main()
{
	FILE * pFile;
	long size;
	pFile = fopen("myfile.txt", "rb");
	if (pFile == NULL) perror("Error opening file");
	else
	{
		fseek(pFile, 0, SEEK_END);
		size = ftell(pFile);
		fclose(pFile);
		printf("Size of myfile.txt: %ld bytes.\n", size);
	}
	system("pause");
	return 0;
}
struct node {
	int date;
	struct node* next;
};
int main() {
	printf("%d\n", sizeof(struct node));
	system("pause");
	return 0;
}

struct point {
	int x;
	int y;
}p1 = {1,1};//定义结构体变量p1//嵌套初始化
int main() {
	struct point p2;//定义结构体变量p2
	struct point p3 = {1,1};//初始化
}
struct student {//类型声明
	char name[100];
	int age;
};
int main() {
	struct student s = { "libai",33 };//初始化
	printf("%d\n", s.age);
	system("pause");
	return 0;
}
struct s1 {
	char c1;
	int i;
	char c2;
};
int main() {
	printf("%d\n", sizeof(struct s1));//12
	system("pause");
	return 0;
}

struct s1 {
	char c1;
	char c2;
	int i;
};
int main() {
	struct s1 t;
	printf("%p\n",&t.c1);
	printf("%p\n",&t.c2);

	printf("%d\n", sizeof(struct s1));//8
	system("pause");
	return 0;
}
enum Day {//星期
	mon,
    tues,
	wed,
	thur,
	fri,
	sat,
	sun
};
#endif
union Un2
{
	short c[7];
	int i;
};
union Un1
{
	char c;
	int i;
}t;
int main() {
	
	printf("%p\n", t.c);
	printf("%p\n", t.i);
	printf("%d\n", sizeof(union Un1));//8
	printf("%d\n", sizeof(union Un2));//16
	system("pause");
	return 0;
}