#if 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//µÝ¹é×Ö·û´®³¤¶È
int Mystrlen(char *str) {
	if (*str == '\0') {
		return 0;
	}
	return 1 + Mystrlen(str + 1);
}
int main() {
	char *p = "good moring";
	int len = Mystrlen(p);
	printf("%d\n", len);
	system("pause");
	return 0;
}
//·ÇµÝ¹é
int main() {
	char arr[] = "cnhdbcsdhbc";
	int len;
		len = strlen(arr);
	printf("%d\n", len);
	system("pause");
	return 0;
}
//Ã°ÅÝÅÅÐò
void Swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void bubble(int arr[], int len) {
	int i, j;
	for (i = 1; i < len; i++) {
		for (j = 0; j < len - i; j++) {
			if (arr[j] < arr[j + 1]) {
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
int main() {
	int i;
    int p[] = { 2,4,23,5,6,7,9,8,7 };
	int len = sizeof(p) / sizeof(p[0]);
	bubble(p, len);
	for (i = 0; i < len; i++) {
		printf("%d  ", p[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
#endif


