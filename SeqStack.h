//栈的顺序存储结构
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

//初始化
SeqStack* init_SeqStack();
//压栈
void push_SeqStack(SeqStack* stack, void* data);
//出栈
void pop_SeqStack(SeqStack* stack);
//栈清空
void clear_SeqStack(SeqStack* stack);
//获取栈顶元素
void* top_SeqStack(SeqStack* stack);
//获取栈的长度
int size_SeqStack(SeqStack* stack);
//栈是否为空
int isEmpty(SeqStack* stack);
//释放栈
void destroy_SeqStack(SeqStack* stack);

#endif