#include <iostream>
#include "ListBaseQueue.h"

int main()
{
	Queue q;
	QueueInit(&q);

	Enqueue(&q, 1);
	Enqueue(&q, 2);
	Enqueue(&q, 3);
	Enqueue(&q, 4);
	Enqueue(&q, 5);

	while (!QIsEmpty(&q)) std::cout << Dequeue(&q) << ' ';

	return 0;
}