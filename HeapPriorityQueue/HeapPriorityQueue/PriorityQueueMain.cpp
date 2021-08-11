#include <iostream>
#include "PriorityQueue.h"
int DataPriorityComp(char ch1, char ch2)
{
	return ch2 - ch1;
	//return ch1-ch2;
}
int main()
{
	PQueue pq;
	PQueueInit(&pq, DataPriorityComp);

	PEnqueue(&pq, 'A');
	PEnqueue(&pq, 'B');
	PEnqueue(&pq, 'C');
	std::cout << PDequeue(&pq) << '\n';

	PEnqueue(&pq, 'A');
	PEnqueue(&pq, 'B');
	PEnqueue(&pq, 'C');
	std::cout << PDequeue(&pq) << '\n';

	while (!PQIsEmpty(&pq))
		std::cout << PDequeue(&pq) << '\n';

	return 0;
}