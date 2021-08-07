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
			std::cout << "����Ʈ�� ����ֽ��ϴ�\n";
			return;
		}
		plist->cur = plist->tail->next;
		std::cout << "��ü ������: ";
		while (1)
		{
			std::cout << plist->cur->data << ' ';
			plist->cur = plist->cur->next;
			if (plist->cur == plist->tail->next) break;
		}
		std::cout << "\n" << "������ ����: " << plist->numOfData << "\n";
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
		std::cout << data << " �����͸� �����Ͽ����ϴ�\n";
		LShow(plist);
		return;
	}
	void LSearch(CircleList<T>* plist, T data)
	{
		if (plist->tail == NULL) {
			std::cout << data << " �����Ͱ� ����Ǿ� ���� �ʽ��ϴ�\n";
			return;
		}
		plist->cur = plist->tail->next;
		int i = 1;
		while (1) {
			if (data == plist->cur->data) {
				std::cout << "ã���ô� "<< data << " �����ʹ� " << i << "��°�� �ֽ��ϴ�\n";
				return;
			}
			i++;
			plist->cur = plist->cur->next;
			if (plist->cur == plist->tail->next) {
				std::cout << "ã���ô� " << data << " �����Ͱ� �����ϴ�\n";
				return;
			}
		}
	}
	void LRemove(CircleList<T>* plist, T data)
	{
		if (plist->tail == NULL) {
			std::cout << "�����Ͱ� ����Ǿ� ���� �ʽ��ϴ�\n";
			return;
		}
		plist->cur = plist->tail->next;
		int i = 1;
		Node<T>* before = new Node<T>;
		before = plist->tail;
		while (1) {
			if (data == plist->cur->data) {
				std::cout << data <<"�����͸� �����Ͽ����ϴ�\n";
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
				std::cout << "ã���ô� " << data << " �����Ͱ� �����ϴ�\n";
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