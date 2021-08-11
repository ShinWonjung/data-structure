//#include <iostream>
//#include "UsefulHeap.h"
//int DataPriorityComp(char ch1, char ch2)
//{
//	return ch2 - ch1;
//	//return ch1-ch2;
//}
//int main()
//{
//	Heap heap;
//	HeapInit(&heap, DataPriorityComp);
//
//	HInsert(&heap, 'A');
//	HInsert(&heap, 'B');
//	HInsert(&heap, 'C');
//	std::cout << HDelete(&heap) << '\n';
//
//	HInsert(&heap, 'A');
//	HInsert(&heap, 'B');
//	HInsert(&heap, 'C');
//	std::cout << HDelete(&heap) << '\n';
//
//	while (!HIsEmpty(&heap))
//		std::cout << HDelete(&heap) << '\n';
//
//	return 0;
//}