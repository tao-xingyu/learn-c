#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#if 0
void rotate(char* s, int k) {
	int len = strlen(s);
	char* p;
	char* q;
	for (p = s + k - 1; p >= s; --p) {
		for (q = p; q < p + len - k; q++) {
			char tmp = *q;
			*q = *(q + 1);
			*(q + 1) = tmp;
		}
	}
}
int main() {
	char string[30];
	scanf("%s", string);
	int k = 0;
	printf("请输入你要旋转的字符个数:");
	scanf("%d", &k);
	if (k > (int)strlen(string)) {
		printf("输入有误\n");
	}
	rotate(string, k);
	printf("%s\n", string);
	system("pause");
	return 0;
}

void reverse(char* left, char* right) {
	assert((left != NULL) && (right != NULL));//断言
	while (left < right) {
		int tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}
void reverse2(char* src, int k) {
	int len = strlen(src);
	reverse(src, src + k - 1);//逆序要左旋的k个字符
	reverse(src + k, src + len - 1);//逆序剩下的字符
	reverse(src,src + len - 1);//逆序剩下的所以字符
}
int main() {
	char arr[] = "ABCDE";
	int k = 0;
	scanf("%d", &k);
	reverse2(arr, k);
	printf("%s\n", arr);
	system("pause");
	return 0;
}


void drink(int money) {
	int price = 1;
	int bottle = 0;
	int drink_num = 0;
	bottle = money / price;
	drink_num = bottle;
	while (bottle != 1) {//剩一个空瓶子,结束循环
		drink_num += bottle / 2;
 		bottle = bottle / 2 + bottle % 2;
	}
	printf("%d\n", drink_num);
}
int main() {
	int money = 20;
	drink(money);
	system("pause");
	return 0;
}



int main() {
	int i = 0;
	int ret = 0;
	int pos = 0;
	int arr[] = { 1,2,3,4,6,7,4,3,2,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < len; i++) {
		ret = ret ^ arr[i];
	}
	for (i = 0; i < 32; i++) {
		if (((ret >> 1) & 1) == 1) {
			pos = i;
			break;
		}
	}

	for (i = 0; i < len; i++) {
		if (((arr[i] >> pos) & 1) == 1) {
			num1 = num1 ^ arr[i];
		}
	}
	num2 = num1 ^ ret;
	printf("num1 = %d\nmun2 = %d\n", num1, num2);
	system("pause");
	return 0;
}
#endif