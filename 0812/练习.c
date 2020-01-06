#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<assert.h>
#if 0
int main() {
	char a[1000];//-128-127
	int i;
	for (i = 0; i < 1000; i++) {
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	system("pause");
	return 0;
}
struct Student{
	char name[10];
	int age;
}stu1,stu2;//全局变量
int main() {
	struct Student stu3={"caocao",99};//局部变量
	stu3.age = 88;
	strcpy(stu3.name, "liubei");//拷贝字符串(指针类型,字符串)
	printf("%s,%d\n", stu3.name, stu3.age);
	system("pause");
	return 0;
}
int main() {
	char a = -128;
	printf("%u\n", a);//无符号类型,整型内存储的一般都是补码
	system("pause");
	return 0;
}



unsigned int reverse_bit(unsigned int value) {
	int i = 0;
	unsigned int tmp = 0;
	for (i = 0; i < 32; i++) {
		tmp +=((value >> i) & 1)*(unsigned int)pow(2, 31 - i);
	}
	return tmp;
}
int main() {
	unsigned int ret;
    ret =reverse_bit(25);
	printf("%u\n", ret);
	system("pause");
	return 0;
}
int num(int x,int y) {
	int ret, ret1, ret2;
	ret1 = x >> 1;
	ret2 = y >> 1;
	ret = ret1 + ret2;
	return ret;
}
int main() {
	int a, b;
	printf("Enter number:");
	scanf("%d%d", &a, &b);
	printf("%d\n", num(a, b));
	system("pause");
	return 0;
}
int main() {
	int arr[] = { 1,2,3,6,3,2,1 };
	int i = 0;
	int ret = 0;
	for (i = 0; i < 7; i++) {
		ret = ret ^ arr[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}


int my_strlen(const char *str) {//求字符串长度
	assert(str);
	int len = 0;
	while (*str++) {
		len++;
	}
	return len;
}
void reverse(char *left, char *right) {//逆置字符串
	assert(left);
	assert(right);
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void str_reverse(char *str) {//逆置每一个单词
	assert(str);
	int len = my_strlen(str);//求长度
	reverse(str, str + len - 1);//整体逆置
	while (*str != '\0') {
		char *p = str;
		while ((*str != ' ') && (*str != '\0')) {//每个单词结束标记为一个空格,最后一个单词是'\0'
			str++;//依次累计每个单词的字符
		}
		reverse(p, str - 1);//单词分别逆置
		if (*str != '\0') {//表示遇到'\0'则字符串停止累加
			str++;
		}
	}
}
int main() {
	char str[] = "student a am i";
	str_reverse(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}


#endif
#if 0
void menu() {
	printf("********************\n");
	printf("********************\n");
	printf("********1.play******\n");
	printf("********0.exit******\n");
	printf("********************\n");
	printf("********************\n");
}
void game() {

}
int main() {
	int input = 0;
	do {
		printf("请输入你的操作:");
		scanf("%d", &input);
		menu();
		switch (input) {
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("您的输入有误,请重新输入\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}

void Initboard(int board[][3], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
#endif
int main(char board[][3]) {
	int i;
	printf("---|---|---\n");
	for (i = 0; i < 3; i++) {
			printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
			printf("---|---|---\n");
	}
	system("pause");
	return 0;
}