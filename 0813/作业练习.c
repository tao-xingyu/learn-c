//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//void Move(int arr[], int left, int right) {
//	while (left <= right) {
//		if (arr[left] % 2 == 1 && arr[right] % 2 == 0) {
//			left++;
//			right--;
//		}
//		else if (arr[left] % 2 == 1 && arr[right] % 2 == 1) {
//			left++;
//		}
//		else if (arr[left] % 2 == 0 && arr[right] % 2 == 1) {
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//		else {
//			right--;
//		}
//	}
//}
//int main() {
//	int i;
//	int a[] = { 1,4,6,3,7,9,8,10,12,13 };
//	int len = sizeof(a) / sizeof(a[0]);
//	int left = 0;
//	int right = len - 1;
//	Move(a, left, right);
//	for (i = 0; i < len; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//#define row 4
//#define col 4
//int Findnum(int arr[][col], int num) {
//	int i = 0;
//	int j = col - 1;
//	int tmp = arr[i][j];
//	while (1) {
//		if (tmp == num) {
//			return 1;
//		}
//		else if (tmp < num&&j >= 0) {
//			tmp = arr[++i][j];
//		}
//		else if (tmp > num&&j >= 0) {
//			tmp = arr[i][--j];
//		}
//		else {
//			return 0;
//		}
//	}
//}
//int main() {
//	int a[row][col] = { 1,2,3,4,2,3,4,5,3,4,5,6,6,7,8,9 };
//	//int i = 0;
//	//int j = 0;
//	int ret;
//	int x;
//	printf("Enter x:");
//	scanf("%d", &x);
//	ret = Findnum(a, x);
//	if (ret == 1) {
//		printf("%d在数组中\n", x);
//	}
//	else {
//		printf("%d不在数组中\n", x);
//	}
//	system("pause");
//	return 0;
//}
