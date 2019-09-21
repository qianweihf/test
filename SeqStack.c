//栈顺序存储结构的实现
#include "SeqStack.h"

//初始化
SeqStack* init_SeqStack()
{
	SeqStack* stack = (SeqStack*)malloc(sizeof(SeqStack));
	stack->size = -1;
	return stack;
}
//压栈
void push_SeqStack(SeqStack* stack, void* data)
{
	if (stack == NULL || data == NULL)
	{
		return;
	}
	if (stack->size == MAX_SIZE-1)    //栈满
	{
		return;
	}
	stack->size++;
	stack->data[stack->size] = data;
}
//出栈
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
//栈清空
void clear_SeqStack(SeqStack* stack)
{
	if (stack == NULL)
	{
		return;
	}
	stack->size = -1;
}
//获取栈顶元素
void* top_SeqStack(SeqStack* stack)
{
	if (stack == NULL)
	{
		return NULL;
	}
	return stack->data[stack->size];
}
//获取栈的长度
int size_SeqStack(SeqStack* stack)
{
	if (stack == NULL)
	{
		return -1;
	}
	return stack->size+1;
}
//栈是否为空
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
//释放栈
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