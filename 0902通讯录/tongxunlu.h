#ifndef __TONGXUNLU_H__
#define __TONGXUNLU_H__
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

typedef struct LINKMAN {//ÿ����Ա����Ϣ
	char name[20];
	char sex[10];
	int age;
	char tel[12];
	char add[50];
}LINKMAN;

typedef struct stu {//ͨѶ¼�ṹ��
	LINKMAN num[1000];
	int count;
}stu;

void menu();
void init_stu(stu* p);//��ʼ��
void Add_stu(stu* p);//�����ϵ��
void Dele_stu(stu* p);//ɾ��ָ����ϵ��
void Find_stu(stu* p);//����ָ����ϵ��
void Mod_stu(stu* p);//�޸�ָ����ϵ��
void Print_stu(stu* p);//��ʾָ����ϵ��
void Empty_stu(stu* p);//���������ϵ��
void sort_stu(stu* p);//����������������ϵ��
#endif