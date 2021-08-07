#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

struct ArrayStack
{
	Data stackArr[STACK_LEN];
	int topIndex;
};

typedef ArrayStack Stack;

void StackInit(Stack* pstack);
int SIsEmpty(Stack* pstack);

void SPush(Stack* pstack, Data data);
Data Spop(Stack* pstack);
Data SPeek(Stack* pstack);

#endif
