//100到200之间的素数
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i = 0, count = 0;//定义为整数
	for(i = 100;i <= 200;i++){//设置循环
		int j;
		for (j = 2; j <= i; j++) {//i除J到i-1的循环
			if (i%j == 0)
				break;//余数为0,跳出循环
		}
		if (i == j) //i=J则i是素数
		{
			count++;
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}