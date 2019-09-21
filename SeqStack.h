//ջ��˳��洢�ṹ
#ifndef SEQSTACK_H
#define SEQSTACK_H
#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 1024
#define SeqStack_TRUE 1
#define SeqStack_FALSE 0

typedef struct SEQSTRUCT
{
	void* data[MAX_SIZE];
	int size;
}SeqStack;

//��ʼ��
SeqStack* init_SeqStack();
//ѹջ
void push_SeqStack(SeqStack* stack, void* data);
//��ջ
void pop_SeqStack(SeqStack* stack);
//ջ���
void clear_SeqStack(SeqStack* stack);
//��ȡջ��Ԫ��
void* top_SeqStack(SeqStack* stack);
//��ȡջ�ĳ���
int size_SeqStack(SeqStack* stack);
//ջ�Ƿ�Ϊ��
int isEmpty(SeqStack* stack);
//�ͷ�ջ
void destroy_SeqStack(SeqStack* stack);

#endif