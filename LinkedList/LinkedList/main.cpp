#include <iostream>

template <typename T>
struct Node
{
	T data;
	Node* next;
};

template <typename T>
struct LinkedList
{
	Node<T>* head = new Node<T>;
	Node<T>* cur = new Node<T>;
	int len = 0;

	void LInit(LinkedList* plist)
	{
		Node<T>* node = new Node<T>;
		plist->head = node;
		plist->head->next = NULL;
		cur = plist->head;

		return;
	}
	void LInsert(LinkedList* plist, T data)
	{
		Node<T>* node = new Node<T>;
		node->data = data;
		node->next = plist->head->next;
		plist->head->next = node;
		len++;

		std::cout << data << " 삽입 성공\n";
		return;
	}
	void LSearch(LinkedList* plist, T data)
	{
		cur = plist->head->next;
		int i;
		for (i = 0; i< plist->len; i++) {
			if (cur->data == data) break;
			cur = cur->next;
		}
		if (i == plist->len) {
			std::cout << "찾는 데이터가 없습니다\n";
			return;
		}
		std::cout << data << " 데이터가 " << i + 1 << "번째에 있습니다\n";

		return;
	}
	void LRemove(LinkedList* plist, T data)
	{
		Node<T>* temp = new Node<T>;
		cur = plist->head->next;
		int i;
		for (i = 0; i < plist->len; i++) {
			if (cur->data == data) break;
			temp = cur;
			cur = cur->next;
		}
		if (i == plist->len) { 
			std::cout << "삭제할 데이터가 없습니다\n";
			return; 
		}
		temp->next = cur->next;
		cur = temp;
		temp = NULL;
		len--;
		std::cout << data << " 삭제 완료\n";
		delete temp;
		return;
	}
	void LShow(LinkedList* plist)
	{
		cur = plist->head->next;
		std::cout << "전체 데이터: ";
		for (int i = 0; i < plist->len; i++) {
			std::cout << cur->data << ' ';
			cur = cur->next;
		}
		std::cout << "\n" << "데이터의 개수: " << plist->len << "\n";
		return;
	}
};

int main()
{
	LinkedList<int> list;
	list.LInit(&list);
	list.LInsert(&list, 1);
	list.LInsert(&list, 2);
	list.LInsert(&list, 3);
	list.LInsert(&list, 4);
	list.LInsert(&list, 5);
	list.LShow(&list);
	std::cout << "\n";
	list.LSearch(&list, 2);
	list.LSearch(&list, 5);
	list.LSearch(&list, 1);
	list.LSearch(&list, 7);
	std::cout << "\n";
	list.LRemove(&list, 3);
	list.LShow(&list);
	std::cout << "\n";
	list.LRemove(&list, 2);
	list.LRemove(&list, 2);
	list.LShow(&list);

	return 0;
}