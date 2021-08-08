#ifndef __DEQUE_H__
#define __DEQUE_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

struct Node
{
	Data data;
	Node* next;
	Node* prev;
};
struct DLDeque
{
	Node* head;
	Node* tail;
};

typedef DLDeque Deque;

void DequeInit(Deque* pdeq);
int DQIsEmpty(Deque* pdeq);
void DQAddFirst(Deque* pdeq, Data data);
void DQAddLast(Deque* pdeq, Data data);
Data DQRemoveFirst(Deque* pdeq);
Data DQRemoveLast(Deque* pdeq);
Data DQGetFirst(Deque* pdeq);
Data DQGetLast(Deque* pdeq);

#endif