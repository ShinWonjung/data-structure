#include <iostream>

template <typename T>
struct Node
{
	T data;
	Node* prev;
	Node* next;
};
template <typename T>
struct DoubleList
{
	Node<T>* head;
	Node<T>* tail;
	Node<T>* cur;
	int numOfData;

	void LInit(DoubleList<T>* plist)
	{
		plist->head = new Node<T>;
		plist->tail = new Node<T>;
		plist->head->prev = NULL;
		plist->head->next = plist->tail;
		plist->tail->prev = plist->head;
		plist->tail->next = NULL;
		plist->cur = NULL;
		plist->numOfData = 0;
		LShow(plist);
		return;
	}
	void LShow(DoubleList<T>* plist)
	{
		if (plist->head->next == plist->tail) {
			std::cout << "데이터가 없습니다\n";
			return;
		}
		plist->cur = plist->head->next;
		std::cout << "전체 데이터: ";
		while (1) {
			std::cout << plist->cur->data << ' ';
			if (plist->cur->next == plist->tail) break;
			plist->cur = plist->cur->next;
		}
		std::cout << "\n데이터 개수: " << plist->numOfData << "\n";
		return;
	}
	void LInsert(DoubleList<T>* plist, T data)
	{
		Node<T>* node = new Node<T>;
		node->data = data;
		node->next = plist->head->next;
		node->next->prev = node;
		node->prev = plist->head;
		plist->head->next = node;
		numOfData++;
		LShow(plist);
		return;
	}
	void LRemove(DoubleList<T>* plist, T data)
	{
		if (plist->head->next == plist->tail) {
			std::cout << "리스트에 데이터가 존재하지 않습니다\n";
			return;
		}
		plist->cur = plist->head->next;
		while (1) {
			if (plist->cur->data == data) {
				std::cout << data << " 데이터를 삭제합니다\n";
				plist->cur->prev->next = plist->cur->next;
				plist->cur->next->prev = plist->cur->prev;
				plist->cur->next = NULL;
				plist->cur->prev = NULL;
				Node<T>* temp = new Node<T>;
				temp = plist->cur;
				plist->cur = NULL;
				delete temp;
				LShow(plist);
				return;
			}
			if (plist->cur->next == plist->tail) {
				std::cout << data << " 데이터가 존재하지 않습니다\n";
				return;
			}
			plist->cur = plist->cur->next;
		}
	}
};
int main()
{
	DoubleList<int> list;
	list.LInit(&list);
	list.LInsert(&list, 1);
	list.LInsert(&list, 2);
	list.LInsert(&list, 3);
	list.LInsert(&list, 4);
	list.LInsert(&list, 5);
	list.LRemove(&list, 3);

	return 0;
}