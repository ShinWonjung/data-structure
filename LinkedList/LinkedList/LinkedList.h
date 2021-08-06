/*#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

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
	int len = 0;

	void LInit(LinkedList* plist);
	void LInsert(LinkedList* plist, T data);
	void LSearch(LinkedList* plist, T* pdata);
	void LRemove(LinkedList* plist, T* pdata);
	void LShow(LinkedList* plist);
};

#endif
*/