#include"tongxunlu.h"
stu sta;//�����ṹ��

void menu() {
	printf("*******************************\n");
	printf("*******1.�����ϵ����Ϣ********\n");
	printf("*******2.ɾ���ƶ���ϵ����Ϣ****\n");
	printf("*******3.����ָ����ϵ����Ϣ****\n");
	printf("*******4.�޸�ָ����ϵ����Ϣ****\n");
	printf("*******5.��ʾ������ϰ����Ϣ****\n");
	printf("*******6.���������ϵ����Ϣ****\n");
	printf("*******7.����������������ϵ��***\n");
	printf("*******0.�˳�����***************\n");
	printf("*******************************\n");
}
int Find(stu* p, char* name) {//�����˱��
	assert(p);
	int i = 0;
	for (i = 0; i < p->count; i++) {
		if (strcmp(p->num[i].name, name) == 0) {
			return i;
		}
	}
	return -1;
}

void init_stu(stu* p) {//��ʼ��
	assert(p);
	int count = sizeof(p->num);
	memset(p->num, 0, count);
}

void Add_stu(stu* p) {//�����ϵ��
	assert(p);
	printf("��������Ҫ��ӵ���ϵ��������\n");
	scanf("%s", p->num[p->count].name);
	printf("��������Ҫ��ӵ���ϵ���Ա�\n");
	scanf("%s", p->num[p->count].sex); 
	printf("��������Ҫ��ӵ���ϵ�����䣺\n");
	scanf("%d",&(p->num[p->count].age)); 
	printf("��������Ҫ��ӵ���ϵ�˵绰��\n");
	scanf("%s", p->num[p->count].tel); 
	printf("��������Ҫ��ӵ���ϵ�˵�ַ��\n");
	scanf("%s", p->num[p->count].add);
	if ((p->count) > 1000) {
		printf("ͨѶ¼������\n");
	}
	else {
		printf("��ӳɹ���\n");
		p->count++;
	}
}

void Dele_stu(stu* p) {//ɾ����ϵ��
	assert(p);
	int i = 0;
	char name[20] = { 0 };
	printf("������Ҫɾ����������\n");
	scanf("%s", name);
	int num = Find(p, name);
	if (num == -1) {
		printf("û���ҵ���\n");
		return;
	}
	for (i = num; i < p->count - 1; i++) {
		p->num[i] = p->num[i + 1];
	}
	p->count--;//��Ա����-1
	printf("����ɹ���\n");
}

void Find_stu(stu* p) {//������ϵ��
	assert(p);
	printf("������������ҵ�������\n");
	char name[20] = { 0 };
	scanf("%s", name);
	int Num = Find(p, name);
	if (Num == -1) {
		printf("û���ҵ���\n");
		return;
	}
	printf("%s\t", p->num[Num].sex);
	printf("%d\t", p->num[Num].age);
	printf("%s\t", p->num[Num].tel);
	printf("%s\t", p->num[Num].add);
	printf("\n");
}

void Mod_stu(stu* p) {//�޸�ͨѶ¼
	assert(p);
	int input = 0;
	printf("������Ҫ�޸ĵ���ϵ��������\n");
	char name[20] = { 0 };
	scanf("%s", name);
	int num = Find(p, name);//�õ���ϵ��������Ӧ��������
	if (num == -1) {
		printf("û���ҵ�!\n");
		return;
	}
	printf("������Ҫ�޸ĵ���Ϣ!\n");
	while (1) {
		printf("****1.sex  2.age   *******\n");
		printf("****3.tel  4.add   *******\n");
		printf("****5.Mod_OK**************\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("�������޸ĺ���Ա�!\n");
			scanf("%s", p->num[num].sex);
			break;
		case 2:
			printf("�������޸ĺ������!\n");
			scanf("%d", &(p->num[num].age));
			break;
		case 3:
			printf("�������޸ĺ�ĵ绰!\n");
			scanf("%s", p->num[num].tel);
			break;
		case 4:
			printf("�������޸ĺ�ĵ�ַ!\n");
			scanf("%s", p->num[num].add);
			break;
		case 5:
			return;
			break;
		default:
			printf("�������!��������!\n");
			break;
		}
	}
}

void Print_stu(stu* p) {//��ӡͨѶ¼
	assert(p);
	int i = 0;
	for (i = 0; i < p->count; i++) {
		printf("%s  %s  %d  %s  %s\n", p->num[i].name, \
			p->num[i].sex, p->num[i].age, \
			p->num[i].tel, p->num[i].add);
	}
}

void Empty_stu(stu* p) {//���ͨѶ¼
	assert(p);
	p->count = 0;
}

void sort_stu(stu* p) {
	assert(p);
	int i = 0, j = 0;
	LINKMAN temp;
	for (i = 0; i < p->count - 1; i++) {
		for (j = 0; j < p->count - i - 1; j++) {
			if (strcmp(p->num[j].name, p->num[j + 1].name) > 0) {
				temp = p->num[j];
				p->num[j] = p->num[j + 1];
				p->num[j + 1] = temp;
			}
		}
	}
}

int main() {
	int input = 0;
	init_stu(&sta);//��ʼ��
	while (1) {
		menu();//�˵�
		printf("��������Ĳ���!\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			Add_stu(&sta);
			break;
		case 2:
			Dele_stu(&sta);
			break;
		case 3:
			Find_stu(&sta);
			break;
		case 4:
			Mod_stu(&sta);
			break;
		case 5:
			Print_stu(&sta);
			break;
		case 6:
			Empty_stu(&sta);
			break;
		case 7:
			sort_stu(&sta);
			break;
		case 0:
			exit(1);//�˳�����
			break;
		default:
			printf("�������!��������!\n");
			break;
		}
	}
	system("pause");
	return 0;
}