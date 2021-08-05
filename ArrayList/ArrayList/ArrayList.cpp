#include <iostream>
#include "ArrayList.h"

void LInit(List* plist)
{
	plist->numOfData = 0;
	plist->curPosition = -1;
}

void LInsert(List* plist, LData data)
{
	if (plist->numOfData > LIST_LEN) {
		std::cout << "메모리 초과로 삽입 실패";
		return;
	}

	plist->arr[plist->numOfData] = data;
	plist->numOfData++;
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->numOfData == 0) return FALSE;

	plist->curPosition = 0;
	*pdata = plist->arr[0];
	return TRUE;
}

int LNext(List* plist, LData* pdata)
{
	plist->curPosition++;
	*pdata = plist->arr[plist->curPosition];

	if (plist->curPosition >= plist->numOfData) return FALSE;
	return TRUE;
}

LData LRemove(List* plist)
{
	LData data = plist->arr[plist->curPosition];
	for (int i = plist->curPosition; i < plist->numOfData - 1; i++) {
		plist->arr[i] = plist->arr[i + 1];
	}
	plist->numOfData--;
	plist->curPosition--;

	return data;
}

int LCount(List* plist)
{
	return plist->numOfData;
}