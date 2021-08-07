#include <iostream>

template <typename T>
struct Node
{
	T data;
	Node* next;
};
template <typename T>
struct CircleList
{
	Node<T>* tail = new Node<T>;
	Node<T>* cur = new Node<T>;
	int numOfData;

	void LInit(CircleList<T>* plist)
	{
		plist->tail = NULL;
		plist->cur = NULL;
		plist->numOfData = 0;
		LShow(plist);
		return;
	}
	void LShow(CircleList<T>* plist)
	{
		if (plist->tail == NULL)
		{
			std::cout << "리스트가 비어있습니다\n";
			return;
		}
		plist->cur = plist->tail->next;
		std::cout << "전체 데이터: ";
		while (1)
		{
			std::cout << plist->cur->data << ' ';
			plist->cur = plist->cur->next;
			if (plist->cur == plist->tail->next) break;
		}
		std::cout << "\n" << "데이터 개수: " << plist->numOfData << "\n";
		return;
	}
	void LInsert(CircleList<T>* plist, T data)
	{
		Node<T>* node = new Node<T>;
		node->data = data;
		if (plist->tail == NULL) {
			plist->tail = node;
			node->next = node;
		}
		else {
			node->next = plist->tail->next;
			plist->tail->next = node;
		}
		plist->numOfData++;
		std::cout << data << " 데이터를 삽입하였습니다\n";
		LShow(plist);
		return;
	}
	void LSearch(CircleList<T>* plist, T data)
	{
		if (plist->tail == NULL) {
			std::cout << data << " 데이터가 저장되어 있지 않습니다\n";
			return;
		}
		plist->cur = plist->tail->next;
		int i = 1;
		while (1) {
			if (data == plist->cur->data) {
				std::cout << "찾으시는 "<< data << " 데이터는 " << i << "번째에 있습니다\n";
				return;
			}
			i++;
			plist->cur = plist->cur->next;
			if (plist->cur == plist->tail->next) {
				std::cout << "찾으시는 " << data << " 데이터가 없습니다\n";
				return;
			}
		}
	}
	void LRemove(CircleList<T>* plist, T data)
	{
		if (plist->tail == NULL) {
			std::cout << "데이터가 저장되어 있지 않습니다\n";
			return;
		}
		plist->cur = plist->tail->next;
		int i = 1;
		Node<T>* before = new Node<T>;
		before = plist->tail;
		while (1) {
			if (data == plist->cur->data) {
				std::cout << data <<"데이터를 삭제하였습니다\n";
				plist->numOfData--;
				before->next = plist->cur->next;
				plist->cur = NULL;
				delete cur;
				LShow(plist);
				return;
			}
			i++;
			before = plist->cur;
			plist->cur = plist->cur->next;
			if (plist->cur == plist->tail->next) {
				std::cout << "찾으시는 " << data << " 데이터가 없습니다\n";
				return;
			}
		}
	}
};

int main()
{
	CircleList<int> list;
	list.LInit(&list);
	list.LInsert(&list, 1);
	list.LInsert(&list, 2);
	list.LInsert(&list, 3);
	list.LInsert(&list, 4);
	list.LInsert(&list, 5);
	list.LRemove(&list, 3);
	list.LRemove(&list, 7);

	return 0;
}