#include<stdio.h>
#include<stdlib.h>
void fun() {
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;
	free(p);
}
void getmemory(char** p) {
	*p = (char*)malloc(100);
	if (NULL != p) {

	}
}
void fun1(void) {
	char* str = NULL;
	getmemory(&str);
	strcpy(str, "hello world");
	printf(str);
}
int main() {
	fun1();
	system("pause");
	return 0;
}
