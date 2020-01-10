#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Add(int x, int y) {
	int ret = x + y;
	return ret;
}
int main() {
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("ret = %d\n", ret);
	system("pause");
	return 0;
}