//100��200֮�������
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i = 0, count = 0;//����Ϊ����
	for(i = 100;i <= 200;i++){//����ѭ��
		int j;
		for (j = 2; j <= i; j++) {//i��J��i-1��ѭ��
			if (i%j == 0)
				break;//����Ϊ0,����ѭ��
		}
		if (i == j) //i=J��i������
		{
			count++;
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}