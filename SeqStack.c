//ջ˳��洢�ṹ��ʵ��
#include "SeqStack.h"

//��ʼ��
SeqStack* init_SeqStack()
{
	SeqStack* stack = (SeqStack*)malloc(sizeof(SeqStack));
	stack->size = -1;
	return stack;
}
//ѹջ
void push_SeqStack(SeqStack* stack, void* data)
{
	if (stack == NULL || data == NULL)
	{
		return;
	}
	if (stack->size == MAX_SIZE-1)    //ջ��
	{
		return;
	}
	stack->size++;
	stack->data[stack->size] = data;
}
//��ջ
void pop_SeqStack(SeqStack* stack)
{
	if (stack == NULL)
	{
		return;
	}
	if (stack->size <= 0 || stack->size > MAX_SIZE - 1)
	{
		return;
	}
	stack->size--;
}
//ջ���
void clear_SeqStack(SeqStack* stack)
{
	if (stack == NULL)
	{
		return;
	}
	stack->size = -1;
}
//��ȡջ��Ԫ��
void* top_SeqStack(SeqStack* stack)
{
	if (stack == NULL)
	{
		return NULL;
	}
	return stack->data[stack->size];
}
//��ȡջ�ĳ���
int size_SeqStack(SeqStack* stack)
{
	if (stack == NULL)
	{
		return -1;
	}
	return stack->size+1;
}
//ջ�Ƿ�Ϊ��
int isEmpty(SeqStack* stack)
{
	if (stack == NULL)
	{
		return -1;
	}
	if (stack->size == -1)
	{
		return SeqStack_TRUE;
	}
	return SeqStack_FALSE;
}
//�ͷ�ջ
void destroy_SeqStack(SeqStack* stack)
{
	if (stack == NULL)
	{
		return;
	}
	if (stack != NULL)
	{
		free(stack);
		stack = NULL;
	}
}