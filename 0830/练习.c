#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#if 0
int main() {
	int n = 0;
	int sum = 0;
	int i,sum1 = 0,sum2 = 0;
	int arr[10] = { 1,2,3,3,2,1,7,8,9,9 };
	for (i = 0; i <10; i++) {
		sum ^= arr[i];
	}
	for (i = 0; i < 10; i++) {
		if (sum >> i & 1) {
			n = i;
			break;
		}
	}
	for (i = 0; i < 10; i++) {
		if (arr[i] >> n & 1) {
			sum1 ^= arr[i];
		}
		else {
			sum2 ^= arr[i];
		}
	}
	printf("%d %d\n", sum1, sum2);
	system("pause");
	return 0;
}
int main()
{
	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
	int n;
	puts("Looking for R2 astromech droids...");
	for (n = 0; n < 3; n++)
		if (strncmp(str[n], "R2xx", 2) == 0)
		{
			printf("found %s\n", str[n]);
		}
	system("pause");
	return 0;
}
int main() {
	char str[] = "this is a simple string";
	char* pch;
	pch = strstr(str, "simple");
	strncpy(pch, "simple", 6);
	puts(str);
	system("pause");
	return 0;
}
int main() {
	char str[] = "- this, a sample string.";
	char* pch;
	printf("splitting string\"%s\"into tokens:\n", str);
	pch = strtok(str, "-,.");
	while (pch != NULL) {
		printf("%s\n", pch);
		pch = strtok(NULL, "-,.");
	}
	system("pause");
	return 0;
}
int main()
{
	FILE * pFile;
	pFile = fopen("C:\Users\taoxingyu\source\repos\0829", "r");
	if (pFile == NULL)
		printf("Error opening file unexist.ent: %s\n", strerror(errno));
	//errno: Last error number
	system("pause");
	return 0;
}

int main()
{
	char str[] = "memmove can be very useful......";
	memmove(str + 20, str + 15, 11);
	puts(str);
	system("pause");
	return 0;
}
int My_strlen(const char* str) {
	int count = 0;
	while (*str) {
		count++;
		str++;
	}
	return count;
}
char* My_strcpy(char* dest,const char* str) {
	char *tmp = dest;
	while (*dest++ = *str++);
		return tmp;
}
char* My_strcat(char* dest, const char*src) {
	char* ret = dest;
	while (*dest) {
		dest++;
	}
	while (*dest++ = *src++) {
		;
	}
	return ret;
}
char* My_strstr(const char* str1, const char* str2) {
	assert(str1);
	assert(str2);
	
	char* cp = (char*)str1;
	const char* substr = (char*)str2;
	char* s1 = NULL;
	if (*str2 == '\0') {
		return NULL;
	}
	while (*cp) {
		s1 = cp;
		substr = str2;
		while (*s1 && *substr && (*s1 == *substr)) {
			s1++;
			substr++;
		}
		if (*substr == '\0') {
			return cp;
		}
		cp++;
	}
	return 0;
}
int My_strcmp(const char* str1, const char*str2) {
	int ret = 0;
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str2) {
		++str1, ++str2;
	}
	if (ret < 0) {
		ret = -1;
	}
	else if (ret > 0) {
		ret = 1;
	}
	return ret;
}

void* Memcpy(void* dst, const void* src, size_t count) {
	void* ret = dst;
	assert(dst);
	assert(src);
	while (count--) {
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return (ret);
}

void * memmove(void * dst, const void * src, size_t count)
{
	void * ret = dst;
	if (dst <= src || (char *)dst >= ((char *)src + count)) {
		/*
		* Non-Overlapping Buffers
		* copy from lower addresses to higher addresses
		*/
		while (count--) {
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else {
		/*
		* Overlapping Buffers
		* copy from higher addresses to lower addresses
		*/
		dst = (char *)dst + count - 1;
		src = (char *)src + count - 1;
		while (count--) {
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}
	return (ret);
}
int main() {
	char arr[] = "hhahahello";
	char str[] = "hello";
	printf("%s\n", Memcpy(arr, str,4));
	system("pause");
	return 0;
}
int main() {
	printf("%s,%d\n", __FILE__, __LINE__);
	system("pause");
	return 0;
}
int main() {
	char* p = "100";
	int num = atoi(p);
	printf("%d\n",num);
	system("pause");
	return 0;
}
#endif
#define ADD(x,y)x + y
int main() {
	printf("%d\n", ADD(10, 20));
	system("pause");
	return 0;
}