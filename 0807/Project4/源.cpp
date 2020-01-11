#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Func() {
   static int n = 0;
	n = n + 1;
	printf("%d\n", n);
}
int main() {
	Func();
	Func();
	Func();

	system("pause");
	return 0;
}