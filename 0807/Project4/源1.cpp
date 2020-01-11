#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
	char name[10];
	int age;
	char id[10];
};
int main() {
	struct Student s = { "ÕÅÈı", 20, "110" };
	printf("%s\n", s.id);
	system("pause");
	return 0;
}