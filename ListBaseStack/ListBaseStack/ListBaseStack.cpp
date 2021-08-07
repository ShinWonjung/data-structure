#include <iostream>
#include <cstdlib>
#include "ListBaseStack.h"

void StackInit(Stack* pstack)
{
	pstack->head = NULL;
	return;
}
int SIsEmpty(Stack* pstack)
{
	if (pstack->head == NULL) return TRUE;
	else return FALSE;
}
void SPush(Stack* pstack, Data data)
{
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = pstack->head;
	pstack->head = newNode;
	return;
}
Data SPop(Stack* pstack)
{
	Data rdata;
	Node* rnode;

	if (SIsEmpty(pstack)) {
		std::cout << "Stack Memory Error!\n";
		exit(-1);
	}
	rdata = pstack->head->data;
	rnode = pstack->head;
	
	pstack->head = pstack->head->next;
	delete rnode;
	return rdata;
}
Data SPeek(Stack* pstack)
{
	if (SIsEmpty(pstack)) {
		std::cout << "Stack Memory Error!\n";
		exit(-1);
	}
	return pstack->head->data;
}