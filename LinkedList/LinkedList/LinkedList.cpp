/*#include "LinkedList.h"
#include <iostream>

template <typename T>
void LinkedList<T>::LInit(LinkedList<T>* plist)
{
	Node<T>* node = new Node<T>;
	plist->head = node;
	plist->head->next = NULL;

	return;
}
template <typename T>
void LinkedList<T>::LInsert(LinkedList<T>* plist, T data)
{
	Node<T>* node = new Node<T>;
	node->data = data;
	node->next = plist->head->next;
	plist->head->next = node;
	len++;

	std::cout << "삽입 성공\n";
	return;
}
template <typename T>
void LinkedList<T>::LSearch(LinkedList<T>* plist, T* pdata)
{
	Node<T>* cur = new Node<T>;
	cur = plist->head->next;
	int i;
	for (i = 0; i < plist->len; i++) {
		if (cur->data == pdata) break;
		cur = cur->next;
	}
	if (i == plist->len) std::cout << "찾는 데이터가 없습니다\n";
	else std::cout << "데이터가 " << i << "번째에 있습니다\n";

	delete cur;
	return;
}
template <typename T>
void LinkedList<T>::LRemove(LinkedList<T>* plist, T* pdata)
{
	Node<T>* cur = new Node<T>;
	cur = plist->head->next;
	int i;
	for (i = 0; i < plist->len; i++) {
		if (cur->data == pdata) break;
		cur = cur->next;
	}
	if (i == plist->len) { std::cout << "찾는 데이터가 없습니다\n"; return; }

	plist->head->next = cur->next;
	delete cur;
	len--;
	std::cout << "삭제 완료\n";

	return;
}
template <typename T>
void LinkedList<T>::LShow(LinkedList<T>* plist)
{
	Node<T>* cur = new Node<T>;
	cur = plist->head->next;
	for (int i = 0; i < plist->len; i++) {
		std::cout << "전체 데이터: " << cur->data << ' ';
		cur = cur->next;
	}
	std::cout << "\n";
	delete cur;
	return;
}*/