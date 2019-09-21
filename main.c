//ջ˳��洢�ṹ����

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "SeqStack.h"

typedef struct PERSON
{
	char name[64];
	int age;
	int id;
}Person;

int main(int argc, char *argv[])
{
	//����ջ
	SeqStack* stack = init_SeqStack();

	//��������
	Person p1, p2, p3, p4, p5;
	strcpy(p1.name, "aaa");
	strcpy(p2.name, "bbb");
	strcpy(p3.name, "ccc");
	strcpy(p4.name, "ddd");
	strcpy(p5.name, "eee");

	p1.age = 10;
	p2.age = 20;
	p3.age = 30;
	p4.age = 40;
	p5.age = 50;

	p1.id = 1001;
	p2.id = 2002;
	p3.id = 3003;
	p4.id = 4004;
	p5.id = 5005;

	//Ԫ����ջ
	push_SeqStack(stack, (void*)&p1);
	push_SeqStack(stack, (void*)&p2);
	push_SeqStack(stack, (void*)&p3);
	push_SeqStack(stack, (void*)&p4);
	push_SeqStack(stack, (void*)&p5);

	//Ԫ�س�ջ
	pop_SeqStack(stack);
	pop_SeqStack(stack);

	//��ȡջ�Ĵ�С
	int size = size_SeqStack(stack);
	printf("%d\n", size);

	//��ȡջ��Ԫ��
	Person* tmp = (Person*)top_SeqStack(stack);
	printf("Name:%s ID:%d Age:%d\n", tmp->name, tmp->id, tmp->age);

	//�ͷ�ջ
	destroy_SeqStack(stack);

	printf("\n");
	system("pause");
	return 0;
}
