#include"tongxunlu.h"
stu sta;//声明结构体

void menu() {
	printf("*******************************\n");
	printf("*******1.添加联系人信息********\n");
	printf("*******2.删除制定联系人信息****\n");
	printf("*******3.查找指定联系人信息****\n");
	printf("*******4.修改指定联系人信息****\n");
	printf("*******5.显示所有练习人信息****\n");
	printf("*******6.清空所有联系人信息****\n");
	printf("*******7.以名字排列所有联系人***\n");
	printf("*******0.退出程序***************\n");
	printf("*******************************\n");
}
int Find(stu* p, char* name) {//查找人编号
	assert(p);
	int i = 0;
	for (i = 0; i < p->count; i++) {
		if (strcmp(p->num[i].name, name) == 0) {
			return i;
		}
	}
	return -1;
}

void init_stu(stu* p) {//初始化
	assert(p);
	int count = sizeof(p->num);
	memset(p->num, 0, count);
}

void Add_stu(stu* p) {//添加联系人
	assert(p);
	printf("请输入你要添加的联系人姓名：\n");
	scanf("%s", p->num[p->count].name);
	printf("请输入你要添加的联系人性别：\n");
	scanf("%s", p->num[p->count].sex); 
	printf("请输入你要添加的联系人年龄：\n");
	scanf("%d",&(p->num[p->count].age)); 
	printf("请输入你要添加的联系人电话：\n");
	scanf("%s", p->num[p->count].tel); 
	printf("请输入你要添加的联系人地址：\n");
	scanf("%s", p->num[p->count].add);
	if ((p->count) > 1000) {
		printf("通讯录已满！\n");
	}
	else {
		printf("添加成功！\n");
		p->count++;
	}
}

void Dele_stu(stu* p) {//删除联系人
	assert(p);
	int i = 0;
	char name[20] = { 0 };
	printf("请输入要删除的姓名！\n");
	scanf("%s", name);
	int num = Find(p, name);
	if (num == -1) {
		printf("没有找到！\n");
		return;
	}
	for (i = num; i < p->count - 1; i++) {
		p->num[i] = p->num[i + 1];
	}
	p->count--;//人员总数-1
	printf("输出成功！\n");
}

void Find_stu(stu* p) {//查找联系人
	assert(p);
	printf("请输入你想查找的姓名！\n");
	char name[20] = { 0 };
	scanf("%s", name);
	int Num = Find(p, name);
	if (Num == -1) {
		printf("没有找到！\n");
		return;
	}
	printf("%s\t", p->num[Num].sex);
	printf("%d\t", p->num[Num].age);
	printf("%s\t", p->num[Num].tel);
	printf("%s\t", p->num[Num].add);
	printf("\n");
}

void Mod_stu(stu* p) {//修改通讯录
	assert(p);
	int input = 0;
	printf("请输入要修改的联系人姓名！\n");
	char name[20] = { 0 };
	scanf("%s", name);
	int num = Find(p, name);//得到联系人姓名对应的数组编号
	if (num == -1) {
		printf("没有找到!\n");
		return;
	}
	printf("请输入要修改的信息!\n");
	while (1) {
		printf("****1.sex  2.age   *******\n");
		printf("****3.tel  4.add   *******\n");
		printf("****5.Mod_OK**************\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("请输入修改后的性别!\n");
			scanf("%s", p->num[num].sex);
			break;
		case 2:
			printf("请输入修改后的年龄!\n");
			scanf("%d", &(p->num[num].age));
			break;
		case 3:
			printf("请输入修改后的电话!\n");
			scanf("%s", p->num[num].tel);
			break;
		case 4:
			printf("请输入修改后的地址!\n");
			scanf("%s", p->num[num].add);
			break;
		case 5:
			return;
			break;
		default:
			printf("输入错误!重新输入!\n");
			break;
		}
	}
}

void Print_stu(stu* p) {//打印通讯录
	assert(p);
	int i = 0;
	for (i = 0; i < p->count; i++) {
		printf("%s  %s  %d  %s  %s\n", p->num[i].name, \
			p->num[i].sex, p->num[i].age, \
			p->num[i].tel, p->num[i].add);
	}
}

void Empty_stu(stu* p) {//清空通讯录
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
	init_stu(&sta);//初始化
	while (1) {
		menu();//菜单
		printf("请输入你的操作!\n");
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
			exit(1);//退出程序
			break;
		default:
			printf("输入错误!重新输入!\n");
			break;
		}
	}
	system("pause");
	return 0;
}