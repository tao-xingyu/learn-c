#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
	char name[10];
	int age;
	char id[10];
};
int main() {
	struct Student d = { "ÕÅÈı", 20, "110" };
	printf("%d\n",d.age);
	system("pause");
	return 0;
}