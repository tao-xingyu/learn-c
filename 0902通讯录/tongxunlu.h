#ifndef __TONGXUNLU_H__
#define __TONGXUNLU_H__
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

typedef struct LINKMAN {//每个成员的信息
	char name[20];
	char sex[10];
	int age;
	char tel[12];
	char add[50];
}LINKMAN;

typedef struct stu {//通讯录结构体
	LINKMAN num[1000];
	int count;
}stu;

void menu();
void init_stu(stu* p);//初始化
void Add_stu(stu* p);//添加联系人
void Dele_stu(stu* p);//删除指定联系人
void Find_stu(stu* p);//查找指定联系人
void Mod_stu(stu* p);//修改指定联系人
void Print_stu(stu* p);//显示指定联系人
void Empty_stu(stu* p);//清空所以联系人
void sort_stu(stu* p);//以名字排列所以联系人
#endif