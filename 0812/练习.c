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
}stu1,stu2;//ȫ�ֱ���
int main() {
	struct Student stu3={"caocao",99};//�ֲ�����
	stu3.age = 88;
	strcpy(stu3.name, "liubei");//�����ַ���(ָ������,�ַ���)
	printf("%s,%d\n", stu3.name, stu3.age);
	system("pause");
	return 0;
}
int main() {
	char a = -128;
	printf("%u\n", a);//�޷�������,�����ڴ洢��һ�㶼�ǲ���
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


int my_strlen(const char *str) {//���ַ�������
	assert(str);
	int len = 0;
	while (*str++) {
		len++;
	}
	return len;
}
void reverse(char *left, char *right) {//�����ַ���
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
void str_reverse(char *str) {//����ÿһ������
	assert(str);
	int len = my_strlen(str);//�󳤶�
	reverse(str, str + len - 1);//��������
	while (*str != '\0') {
		char *p = str;
		while ((*str != ' ') && (*str != '\0')) {//ÿ�����ʽ������Ϊһ���ո�,���һ��������'\0'
			str++;//�����ۼ�ÿ�����ʵ��ַ�
		}
		reverse(p, str - 1);//���ʷֱ�����
		if (*str != '\0') {//��ʾ����'\0'���ַ���ֹͣ�ۼ�
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
		printf("��������Ĳ���:");
		scanf("%d", &input);
		menu();
		switch (input) {
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������������,����������\n");
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