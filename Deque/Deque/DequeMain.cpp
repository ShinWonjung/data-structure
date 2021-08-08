#include <iostream>
#include "Deque.h"

int main()
{
	Deque deq;
	DequeInit(&deq);

	DQAddFirst(&deq, 3);
	DQAddFirst(&deq, 2);
	DQAddFirst(&deq, 1);

	DQAddLast(&deq, 4);
	DQAddLast(&deq, 5);
	DQAddLast(&deq, 6);

	while (!DQIsEmpty(&deq)) std::cout << DQRemoveFirst(&deq) << ' ';
	std::cout << "\n";

	DQAddFirst(&deq, 3);
	DQAddFirst(&deq, 2);
	DQAddFirst(&deq, 1);

	DQAddLast(&deq, 4);
	DQAddLast(&deq, 5);
	DQAddLast(&deq, 6);

	while (!DQIsEmpty(&deq)) std::cout << DQRemoveLast(&deq) << ' ';
	std::cout << "\n";

	return 0;
}